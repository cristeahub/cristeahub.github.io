let component = ReasonReact.statelessComponent("Top");

let make = _children => {
    ...component,
    render: _self =>
        <div className="top">
            <div className="header">
                <h1>(ReasonReact.string({js|Christoffer Tønnessen|js}))</h1>
            </div>
            <div className="contact">
                <a href="https://github.com/cristeahub/" className="icon-github-alt"></a>
                <a href="http://no.linkedin.com/in/chrislinked" className="icon-linkedin"></a>
            </div>
        </div>
};
