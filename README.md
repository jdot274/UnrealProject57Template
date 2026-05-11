# UnrealProject57Template

A starter folder structure for an Unreal Engine 5.7 C++ project.

## Structure

- `Config/` — project configuration (.ini files)
- `Source/` — C++ source code, build and target files
- `Content/` — game content assets (kept via .gitkeep)
- `Plugins/` — third-party and project plugins (kept via .gitkeep)
- `MyProject.uproject` — project descriptor

## Getting Started

1. Clone this repository
2. Right-click `MyProject.uproject` and choose **Generate Visual Studio project files** (or Xcode equivalent on macOS)
3. Open the generated solution and build
4. Launch the editor through the .uproject file

## Notes

Binary asset files (`.uasset`, `.umap`) are not included — they are produced by the Unreal Editor. Empty content folders are tracked with `.gitkeep` placeholder files.
