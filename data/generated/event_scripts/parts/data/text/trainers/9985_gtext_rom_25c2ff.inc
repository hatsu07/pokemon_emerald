	@ data/text/trainers.inc:1097 Route112_Text_BricePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2FF
gText_Rom_25C2FF: @ 0x0825C2FF
	.string "いろあざやかな キノコを たべたら……\nわ わらいが とまらない!\lわっはっはっ!$"
	.if (. - gText_Rom_25C2FF) != 0x2a
	.error "gText_Rom_25C2FF must retain its original byte length"
	.endif
