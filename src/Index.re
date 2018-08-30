module App = {
    let component = ReasonReact.statelessComponent("App");
    let make = _children => {
        ...component,
        render: ({state, send}) => {
            <Top />;
        },
    }
};
ReactDOMRe.renderToElementWithId(<App />, "index");
