# Eclipse Keypop Conan recipes

Conan 2 recipes for the Eclipse Keypop C++ APIs, laid out like
[conan-center-index](https://github.com/conan-io/conan-center-index) so that
they can be used as a
[local-recipes-index](https://docs.conan.io/2/devops/devops_local_recipes_index.html)
remote (Conan >= 2.2).

## Usage

```sh
git clone https://github.com/eclipse-keypop/keypop-cpp-conan-recipes
conan remote add keypop ./keypop-cpp-conan-recipes --type=local-recipes-index
conan install --requires=keypop-reader-cpp-api/2.1.0 --build=missing
```

Packages are built from the tagged GitHub release sources on first use.

## Adding a version

1. Add the version to `recipes/<package>/config.yml`.
2. Add its source URL and `sha256` to `recipes/<package>/all/conandata.yml`.
3. Check it with `conan create recipes/<package>/all --version=<version>`.
