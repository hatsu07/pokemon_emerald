	@ data/text/trainers.inc:1091 Route112_Text_BriceIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25C2CD
gText_Rom_25C2CD: @ 0x0825C2CD
	.string "わっはっはっ!\nどうだ?\lオレと しょうぶ しないか?\lわっはっはっ!{EOS}"
	.if (. - gText_Rom_25C2CD) != 0x24
	.error "gText_Rom_25C2CD must retain its original byte length"
	.endif
