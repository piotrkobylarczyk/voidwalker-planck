# 🌌 voidwalker-planck

![Project Banner](assets/banner.png)

## ⚡ High-Efficiency Ortholinear Architecture
Firmware configuration for the **ZSA Planck EZ**, engineered for **macOS (Apple Silicon M4)** environments. This repository represents a transition from standard QWERTY/Mouse workflows to a keyboard-centric, low-latency paradigm.

### 📐 Technical Specifications
- **Layout**: Colemak-DH (Ortholinear optimized)
- **Framework**: QMK (Quantum Mechanical Keyboard) Firmware
- **Mod Paradigm**: GACS (GUI, Alt, Ctrl, Shift) Home Row Mods
- **Target OS**: macOS (Primary), Windows (Baseline compatible)

---

## 🎹 The Logic Layer: Home Row Mods (GACS)
To mitigate RSI and maximize words-per-minute (WPM), this layout utilizes a mirrored **GACS** (GUI, Alt, Ctrl, Shift) home row mod configuration. This eliminates the need for uncomfortable "claw" grips for system shortcuts.

![Home Row Mods Map](assets/homerow.png)

| Key | Tap | Hold (Modifier) |
| :--- | :--- | :--- |
| **A / O** | A / O | **GUI (Command ⌘)** |
| **R / I** | R / I | **ALT (Option ⌥)** |
| **S / E** | S / E | **CTL (Control ⌃)** |
| **T / N** | T / N | **SFT (Shift ⇧)** |

---

## 🗺️ Spatial Mapping: 7-Layer Matrix
The Planck EZ's 47-key footprint is expanded through a multi-layer modal architecture. Each layer is context-specific to minimize finger travel.

![Layer Logic Flowchart](assets/layers.png)

### Core Layer Definitions:
- **_BASE (0)**: Colemak-DH alphanumeric entry.
- **_NUM (4)**: Numpad and cursor navigation (H, N, E, I mapping).
- **_SYM (5)**: Code-centric symbols and **Integrated Mouse Emulation**.
- **_FN (6)**: Function keys (F1-F12), Media controls, and Bootloader access.

---

## 🛠️ Build & Deployment

### Dependencies
- **QMK CLI**: `brew install qmk/qmk/qmk`
- **Compiler**: `arm-none-eabi-gcc` (embedded toolchain)
- **Flashing**: [Keymapp](https://www.zsa.io/flash/)

### Compilation String
```bash
qmk compile -kb planck/ez -km mac_colemak
