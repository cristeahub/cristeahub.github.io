type item = {
  title: string,
  image: string,
  link: string,
  description: string
};

let items: list(item) = [
  {
    title: "Hyre",
    image: "assets/image/hyre.png",
    link: "https://hyre.no",
    description: "Oslo's prime car sharing service!"
  },
  {
    title: "No Invitation",
    image: "assets/image/no-invitation.png",
    link: "http://www.pouet.net/prod.php?which=73145",
    description: "Invitation for Revision 2018, won Under Construction 2017."
  },
  {
    title: "Construct",
    image: "assets/image/construct.png",
    link: "http://www.pouet.net/prod.php?which=81917",
    description: "Winner of the Solskogen 2019 new school demo compo!"
  },
  {
    title: "Flat Shade Society",
    image: "assets/image/zeven.png",
    link: "http://www.pouet.net/prod.php?which=81092",
    description: "Entry for Revision 2019 in the pc demo compo!"
  },
  {
    title: "What are you syncing about?",
    image: "assets/image/syncing-about.png",
    link: "http://www.pouet.net/prod.php?which=69705",
    description: "Entry for Revision 2017 in the pc demo compo!"
  },
  {
    title: "Everything is fashion",
    image: "assets/image/fashion.png",
    link: "http://www.pouet.net/prod.php?which=65978",
    description: "Entry for Solskogen 2015 in the new school demo compo!"
  },
  {
    title: "Zeven",
    image: "assets/image/zeven.png",
    link: "http://www.pouet.net/prod.php?which=70961",
    description: "Entry for Solskogen 2017 in the new school demo compo!"
  },
  {
    title: "Crankwork Steamfist",
    image: "assets/image/crankwork-steamfist.png",
    link: "http://www.pouet.net/prod.php?which=67774",
    description: "Entry for Solskogen 2016 in the pc demo compo!"
  },
  {
    title: "Inakuwa Oasis",
    image: "assets/image/inakuwa-oasis.png",
    link: "http://www.pouet.net/prod.php?which=63732",
    description: "Entry for Solskogen 2014 in the pc demo compo!"
  },
  {
    title: "TUNL-MNTN-WTER",
    image: "assets/image/tunnel.png",
    link: "http://www.pouet.net/prod.php?which=61584",
    description: "Entry for Solskogen 2013 in the pc demo compo!"
  },
  {
    title: "HONEYCOMB",
    image: "assets/image/honeycomb.png",
    link: "http://www.pouet.net/prod.php?which=59501",
    description: "Entry for Solskogen 2012 in the web demo compo!"
  },
];

[@react.component]
let make = (~item: item) => {
  <div
    className=("col-md-4 " ++ Css.(
      style([
            fontSize(px(48)),
            fontWeight(`num(600)),
            color(hex("DB4105")),
            textAlign(`center),
      ])))
    >
      {item.title |> Utils.text}
    </div>
};
