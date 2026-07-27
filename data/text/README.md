# Text data

Editable game text is kept under `data/text/`.

The assembler include path and the editable source location are intentionally
separate:

- Files under `data/text/generated/` preserve ROM layout and include order.
- Files under the other directories contain text intended to be edited.

## Directories

- `events/`: event scripts and event dialogue
- `rodata/`: text that is physically emitted through `data/rodata.inc`
- `generated/`: generated or ROM-order include files

`data/text/rodata/` is divided into categories such as `battle/`, `menus/`,
`maps/`, `credits/`, `ribbons/`, `pokemon/`, `items/`, `moves/`, `contests/`
and `misc/`.

## Editing rule

Normally edit files under `data/text/events/` or
`data/text/rodata/<category>/`.

Do not move or reorder includes in `data/text/generated/` unless the ROM layout
is intentionally being changed. A generated ROM-order file may contain only:

```asm
@ ROM-order forwarding file. Edit the included file instead.
	.include "data/text/rodata/battle/117_battle_text.inc"
```

This keeps the original byte position while placing editable text in a
predictable directory.

Run `python3 tools/organize_rodata_text.py` to preview the migration and
`python3 tools/organize_rodata_text.py --apply` to apply it.
