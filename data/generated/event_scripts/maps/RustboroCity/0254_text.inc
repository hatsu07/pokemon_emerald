	@ data/maps/RustboroCity/scripts.inc:1105 RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1DF644
gText_Rom_1DF644: @ 0x081DF644
	.string "さっきの あやしい やつは\nむこうの トンネルの ほうに\lにげていったと おもうのですよ{EOS}"
	.if (. - gText_Rom_1DF644) != 0x2d
	.error "gText_Rom_1DF644 must retain its original byte length"
	.endif
