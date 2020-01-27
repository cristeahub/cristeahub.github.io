type item = {
  title: string,
  image: string,
  link: string,
  description: string
};

let items: list(item) = [
  {
    title: "Hyre",
    image: "assets/images/hyre.png",
    link: "https://hyre.no",
    description: "Oslo's prime car sharing service!"
  },
  {
    title: "No Invitation",
    image: "assets/images/noinvitation.png",
    link: "http://www.pouet.net/prod.php?which=73145",
    description: "Invitation for Revision 2018, won Under Construction 2017."
  },
  {
    title: "Wikipendium",
    image: "assets/images/wikipendium.png",
    link: "https://www.wikipendium.no",
    description: "Wikipendium is a free and open source wiki for writing summaries of subjects at your local university. Currently mostly used at NTNU where it's used by thousands of students."
  },
  {
    title: "Zombocam",
    image: "assets/images/zombocam.png",
    link: "https://chrome.google.com/webstore/detail/zombocam/fnhhcnnemjcldfgipfcebkmkjjfchpnm?hl=en",
    description: "Browser extension for creating funny filters on your web cam."
  },
  {
    title: "Demolicius",
    image: "assets/images/demolicious.png",
    link: "https://github.com/dmpro2014/report/releases",
    description: "Demolicous is a general purpose SIMT inspired computer built from the scratch up. The architecture is implemented on an FPGA and a custom built PCB was created."
  },
  {
    title: "Construct",
    image: "assets/images/construct.png",
    link: "http://www.pouet.net/prod.php?which=81917",
    description: "Winner of the Solskogen 2019 new school demo compo!"
  },
  {
    title: "Flat Shade Society",
    image: "assets/images/flatshadesociety.png",
    link: "http://www.pouet.net/prod.php?which=81092",
    description: "Entry for Revision 2019 in the pc demo compo!"
  },
  {
    title: "Music Video Dispenser",
    image: "assets/images/musicvideodispenser.png",
    link: "https://youtu.be/JTw3iOBvvOA",
    description: "Online movie generator for your music videos."
  },
  {
    title: "feat.fm",
    image: "assets/images/featfm.png",
    link: "",
    description: "feat.fm brought you live music video streaming from artists all over the world!"
  },
  {
    title: "What are you syncing about?",
    image: "assets/images/whatareyousyncingabout.png",
    link: "http://www.pouet.net/prod.php?which=69705",
    description: "Entry for Revision 2017 in the pc demo compo!"
  },
  {
    title: "Everything is fashion",
    image: "assets/images/fashion.png",
    link: "http://www.pouet.net/prod.php?which=65978",
    description: "Entry for Solskogen 2015 in the new school demo compo!"
  },
  {
    title: "nin",
    image: "assets/images/nin.png",
    link: "https://github.com/ninjadev/nin",
    description: "nin is a in-browser demo tool to create webgl demos. It is used to create most ninjadev demos."
  },
  {
    title: "Zeven",
    image: "assets/images/zeven.png",
    link: "http://www.pouet.net/prod.php?which=70961",
    description: "Entry for Solskogen 2017 in the new school demo compo!"
  },
  {
    title: "Crankwork Steamfist",
    image: "assets/images/crankworksteamfist.png",
    link: "http://www.pouet.net/prod.php?which=67774",
    description: "Entry for Solskogen 2016 in the pc demo compo!"
  },
  {
    title: "Cute Animals Inc",
    image: "assets/images/cuteanimalsinc.png",
    link: "https://arkt.is/cute-animals-inc/",
    description: "Cute Animals Inc is a game created on a 48 hour hackathon called Bacon Game Jam 06."
  },
  {
    title: "Inakuwa Oasis",
    image: "assets/images/inakuwaoasis.png",
    link: "http://www.pouet.net/prod.php?which=63732",
    description: "Entry for Solskogen 2014 in the pc demo compo!"
  },
  {
    title: "TUNL-MNTN-WTER",
    image: "assets/images/tunlmntnwter.png",
    link: "http://www.pouet.net/prod.php?which=61584",
    description: "Entry for Solskogen 2013 in the pc demo compo!"
  },
  {
    title: "HONEYCOMB",
    image: "assets/images/honeycomb.png",
    link: "http://www.pouet.net/prod.php?which=59501",
    description: "Entry for Solskogen 2012 in the web demo compo!"
  },
];

[@react.component]
let make = (~item: item) => {
  <div className="col-sm-4">
    <a href={item.link} rel="noopener noreferrer">
      <div className=Css.(
        style([
          boxShadow(Shadow.box(~y=px(1), ~blur=px(2), rgb(200, 200, 200))),
          background(hex("f9f9f9")),
          marginBottom(px(15)),
          borderRadius(px(3)),
        ]))
      >
        <div
          className=Css.(
            style([
              background(url(item.image)),
              backgroundSize(cover),
              backgroundRepeat(noRepeat),
              backgroundPosition(center),
              width(pct(100.0)),
              height(px(200)),
              borderTopLeftRadius(px(3)),
              borderTopRightRadius(px(3)),
            ])
          )
        >
        </div>
        <div
          className=Css.(
            style([
                  fontSize(px(22)),
                  fontWeight(`num(600)),
                  color(hex("DB4105")),
                  padding(px(8)),
            ]))
        >
          {item.title |> Utils.text}
        </div>
        <div
          className=Css.(
            style([
              padding4(~top=px(0), ~bottom=px(8), ~left=px(8), ~right=px(8)),
            ])
          )
        >
          {item.description |> Utils.text}
        </div>
      </div>
    </a>
  </div>
};
