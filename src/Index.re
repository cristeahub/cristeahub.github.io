module App = {
    let component = "App" |> ReasonReact.statelessComponent;
    let make = _children => {
        ...component,
        render: ({state, send}) => {
            <Top />;
        },
    }
};
ReactDOMRe.renderToElementWithId(<App />, "index");
