	@ data/text/trainers.inc:563 Route108_Text_CarolinaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25AD8F
gText_Rom_25AD8F: @ 0x0825AD8F
	.string "じまんの ポケモンたちで\nスピーディに たたかうわよ!$"
	.if (. - gText_Rom_25AD8F) != 0x1c
	.error "gText_Rom_25AD8F must retain its original byte length"
	.endif
