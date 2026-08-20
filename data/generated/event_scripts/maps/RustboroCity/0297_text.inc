	@ data/maps/RustboroCity/scripts.inc:1226 RustboroCity_Text_TunnelNearingCompletion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DFADC
gText_Rom_1DFADC: @ 0x081DFADC
	.string "「べんりな トンネル かんせい まぢか!」\p……と かんばんに かかれているが\nその うえに あかい ペンキで\lおおきな バッテンが つけられている{EOS}"
	.if (. - gText_Rom_1DFADC) != 0x4b
	.error "gText_Rom_1DFADC must retain its original byte length"
	.endif
