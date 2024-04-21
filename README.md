# react-native-movies-sdk

modules to fetch and filter the movies

## Installation

```sh
npm install react-native-movies-sdk
```

## Usage

```js
import { fetchMovie } from 'react-native-movies-sdk';

// ...

const result = await fetchMovie("Movie-Name");
```
It returns the list movies, based on the searchQuery, for each movie in the list you will get:

- Movie Name
- Movie Type
- Movie Poster
- Year
- IMDB ID

Api used for this module is omdbapi.

## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
