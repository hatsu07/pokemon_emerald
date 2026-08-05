	@ src/roulette.c:422 Roulette_Text_ControlsInstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262D3F
gText_Rom_262D3F: @ 0x08262D3F
	.string "ベットする わくを じゅうじボタンで えらんで\nAボタンで けってい します$"
	.if (. - gText_Rom_262D3F) != 0x27
	.error "gText_Rom_262D3F must retain its original byte length"
	.endif
