[@bs.val] external document: Js.t({..}) = "document";

Css.(
  global("body", [
    backgroundColor(rgb(220, 220, 220)),
    display(`flex),
    flexDirection(`column),
    alignItems(`center),
    fontFamily("Georgia, serif"),
  ])
);

let mainContainer = document##createElement("div");
document##body##appendChild(mainContainer);

ReactDOMRe.render(
  <>
    <Title
      title="cristea.xyz"
      subtitle={j|christoffer tønnessen|j}
    />
    <div className="row">
      <TextCard>
        {
          "Hello! Here's a collection of some of the things I've been working on. You can contact me at " |> Utils.text
        }
        <a href="mailto:christoffertonnessen@icloud.com">
          {"christoffertonnessen@icloud.com" |> Utils.text}
        </a>
      </TextCard>
    </div>
    {
      Utils.chunk(Item.items, 3)
        |> List.mapi((indexRow, row) =>
          <div className="row">
            {row |> List.mapi((indexCol, item) => <Item key={string_of_int(indexRow) ++ string_of_int(indexCol)} item=item />) |> Belt.List.toArray |> React.array}
          </div>)
        |> Belt.List.toArray |> React.array;
    }
  </>,
  mainContainer,
);
