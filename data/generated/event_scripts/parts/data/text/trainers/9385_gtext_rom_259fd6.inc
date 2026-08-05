	@ data/text/trainers.inc:236 Route104_Text_HaleyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_259FD6
gText_Rom_259FD6: @ 0x08259FD6
	.string "あたしと しょうぶ してもらうわよ!"
	.byte EOS
	.if (. - gText_Rom_259FD6) != 0x13
	.error "gText_Rom_259FD6 must retain its original byte length"
	.endif
