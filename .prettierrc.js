/** @type {import("@types/prettier").Options} */
module.exports = {
  printWidth: 120,
  semi: true,
  singleQuote: false,
  tabWidth: 2,
  useTabs: false,
  plugins: [require("prettier-plugin-astro"), require("prettier-plugin-tailwindcss") /* Must come last */],
  pluginSearchDirs: false,
  overrides: [
    {
      files: "**/*astro",
      options: {
        parser: "astro",
      },
    },
  ],
};
