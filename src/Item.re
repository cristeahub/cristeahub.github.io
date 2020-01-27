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
    title: "Wikipendium",
    image: "assets/image/wikipendium.png",
    link: "https://www.wikipendium.no",
    description: "Wikipendium is a free and open source wiki for writing summaries of subjects at your local university. Currently mostly used at NTNU where it's used by thousands of students."
  },
  {
    title: "Zombocam",
    image: "assets/image/zombocam.png",
    link: "https://chrome.google.com/webstore/detail/zombocam/fnhhcnnemjcldfgipfcebkmkjjfchpnm?hl=en",
    description: "Browser extension for creating funny filters on your web cam."
  },
  {
    title: "Demolicius",
    image: "assets/image/demolicious.png",
    link: "https://github.com/dmpro2014/report/releases",
    description: "Demolicous is a general purpose SIMT inspired computer. It's made from scratch in the subject TDT4295 on NTNU, the fall 2014. It's the first of its kind in this project to utilize HDMI to display graphics on an HDMI enabled screen. The computer architecture is implemented on an FPGA. A custom PCB is made for the system as a whole."
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
    title: "Music Video Dispenser",
    image: "assets/image/music-video-dispenser.png",
    link: "https://youtu.be/JTw3iOBvvOA",
    description: "Online movie generator for your music videos."
  },
  {
    title: "feat.fm",
    image: "assets/image/featfm.png",
    link: "",
    description: "feat.fm brought you live music video streaming from artists all over the world!"
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
    title: "nin",
    image: "assets/image/nin.png",
    link: "https://github.com/ninjadev/nin",
    description: "nin is a in-browser demo tool to create webgl demos. It is used to create most ninjadev demos."
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
    title: "Cute Animals Inc",
    image: "assets/image/cai.png",
    link: "https://arkt.is/cute-animals-inc/",
    description: "Cute Animals Inc is a game created on a 48 hour hackathon called Bacon Game Jam 06."
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
