[@react.component]
let make = (~children) => {
  <div
    className=("col-xs-12 " ++ Css.(
      style([
        margin2(~v=px(12), ~h=px(12)),
        padding2(~v=px(20), ~h=px(20)),
        boxShadow(Shadow.box(~y=px(1), ~blur=px(2), rgb(200, 200, 200))),
        borderRadius(px(3)),
        background(hex("f9f9f9")),
      ])
    ))
  >
    children
  </div>
};
