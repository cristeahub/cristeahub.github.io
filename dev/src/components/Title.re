[@react.component]
let make = (~title, ~subtitle) => {
  <>
    <div
      className=Css.(
        style([
          fontSize(px(48)),
          fontWeight(`num(600)),
          color(hex("DB4105")),
          textAlign(`center),
          margin2(~v=px(20), ~h=px(20)),
        ])
      )
    >
      {React.string(title)}
    </div>
    <div
      className=Css.(
        style([
          fontSize(px(18)),
          fontWeight(`num(600)),
          textAlign(`center),
          margin2(~v=px(20), ~h=px(20)),
          fontFamily("monospace"),
        ])
      )
    >
      {React.string(subtitle)}
    </div>
  </>
};
