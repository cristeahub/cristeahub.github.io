let text = React.string;

let rec chunk = (input: list('a), n) => {
  switch(Belt.List.splitAt(input, n)) {
    | None => [input]
    | Some((x, y)) => List.append([x], chunk(y, n))
    }
}
