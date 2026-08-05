	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:986 BattleFrontier_BattleTowerLobby_Text_ChangedYourMind
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22084C
gText_Rom_22084C: @ 0x0822084C
	.string "あれ? やっぱり やめたの?\nきみって きまぐれ なんだね"
	.byte EOS
	.if (. - gText_Rom_22084C) != 0x1e
	.error "gText_Rom_22084C must retain its original byte length"
	.endif
