# Moony's Magnificent STAF Auxillery

Moony's Magnificent STAF Auxillery, or MMS, is a small STAF-specific auxiliary mod for Arma 3. It contains unit-facing tweaks and compatibility config that are useful for the STAF modset, but too specific for the general Moony's Magnificent Base, Additions, Computers, or Modules projects.

## Features

- Adds a main menu spotlight for quickly joining the STAF main server.
- Cleans up selected vanilla, CDLC, and scenario main menu spotlights.
- Restores vanilla-style main menu spotlight controls when CSLA is loaded.
- Keeps STAF-specific UI and compatibility changes isolated from the broader Moony's Magnificent mods.

## Requirements

- Arma 3

Some compatibility patches only load when their optional dependency is present. For example, the CSLA main menu compatibility addon only applies when CSLA is loaded.

## Usage

Load MMS with the STAF modset. The current features apply automatically through config and do not require Eden modules, Zeus modules, or mission scripting.

## Building

This repository uses the same HEMTT layout as the other Moony's Magnificent mods.

Common commands:

```sh
hemtt check --pedantic
hemtt dev
hemtt build
```

## Repository

MMS is intended to live as its own Git repository, matching the structure used by MMA, MMB, MMC, and MMM.
