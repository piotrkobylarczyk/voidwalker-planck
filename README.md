# voidwalker-planck

QMK keymap for the **ZSA Planck EZ**: Colemak-DH, home-row mods (GACS), layers for numbers, symbols, mouse, and function keys.

Aimed at **macOS** (Command on home row). Usable on Windows with the usual modifier differences.

![Banner](assets/banner.png)

## Why this layout

- **Colemak-DH** on a 47-key ortholinear board (less finger travel than QWERTY).
- **Home-row mods (GACS)** — hold for modifiers, tap for letters — so common shortcuts do not need pinky stretches.
- **Layers** for numpad/nav, symbols + mouse keys, and F-keys/media instead of a large board.

## Home-row mods (GACS)

| Key (Colemak) | Tap | Hold        |
|---------------|-----|-------------|
| A / O         | A/O | GUI (⌘)     |
| R / I         | R/I | Alt (⌥)     |
| S / E         | S/E | Ctrl        |
| T / N         | T/N | Shift       |

![Home row](assets/homerow.png)

If you are new to home-row mods: expect a short adjustment period (accidental mods while typing). Tuning `TAPPING_TERM` in `config.h` helps.

## Layers

| Layer   | Role |
|---------|------|
| `_BASE` | Colemak-DH |
| `_NUM`  | Numpad + cursor (H N E I-style nav) |
| `_SYM`  | Symbols + mouse keys |
| `_FN`   | F1–F12, media, bootloader |

![Layers](assets/layers.png)

Exact key positions: see `keymap.c` / `keymap.json`.

## Build & flash

**Requirements**
- [QMK CLI](https://docs.qmk.fm/#/newbs) (`brew install qmk/qmk/qmk` on macOS)
- ARM GCC toolchain
- [Keymapp](https://www.zsa.io/flash/) (or QMK Toolbox) to flash

**Compile** (adjust keymap name if you renamed it):

```bash
qmk compile -kb planck/ez -km mac_colemak

If this repo is used as a keymap under qmk_firmware/keyboards/planck/ez/keymaps/, place the files there and use your keymap folder name in -km.
Flash with Keymapp: put the board in bootloader mode, select the .bin/.hex, flash.
## Files

keymap.c - Layout and layers
keymap.json - Optional / configurator export
config.h - Tapping term, features
rules.mk - Feature flags

## Credits / license
Built for personal use on a Planck EZ. Adapt freely. QMK is under its own license; this keymap config is provided as-is.
