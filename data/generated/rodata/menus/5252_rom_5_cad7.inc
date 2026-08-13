	.globl gText_Rom_5CAD7C
	.set gText_Rom_5CAD7C, gText_Rom_5CAD78 + 0x4
	.globl gText_Rom_5CAD7E
	.set gText_Rom_5CAD7E, gText_Rom_5CAD78 + 0x6
	@ Charmap text. The final prefix intentionally has no terminator:
	@ it shares the following gText_Rom_5CADA1 = "モード$" suffix.
	.string "エメラルドモードについて$"
	.string "グローバルモードについて$"
	.string "エメラルド"
