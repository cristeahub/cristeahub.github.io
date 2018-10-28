let component = "Top" |> ReasonReact.statelessComponent;

let make = _children => {
    ...component,
    render: _self =>
        <div className="top">
            <div className="header">
                <h1>(ReasonReact.string({js|Christoffer Tønnessen|js}))</h1>
            </div>
            <div className="contact">
                <a href="https://github.com/cristeahub/">
                    <FontAwesomeIcon icon="check-square" />
                </a>
                <a href="http://no.linkedin.com/in/chrislinked">
                </a>
            </div>
        </div>
};
