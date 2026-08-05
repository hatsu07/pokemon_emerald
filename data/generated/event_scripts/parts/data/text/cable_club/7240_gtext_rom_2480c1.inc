	@ data/text/cable_club.inc:165 CableClub_Text_WhichBattleMode
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2480C1
gText_Rom_2480C1: @ 0x082480C1
	.string "きのみを もって いないと\nきのみクラッシュは できません$"
	.if (. - gText_Rom_2480C1) != 0x1e
	.error "gText_Rom_2480C1 must retain its original byte length"
	.endif
