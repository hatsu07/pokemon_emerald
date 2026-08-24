	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:983 BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22082B
gText_Rom_22082B: @ 0x0822082B
	.string "とくに なにも おもわないって こと?\nきみって クールなんだね"
	.byte EOS
	.if (. - gText_Rom_22082B) != 0x21
	.error "gText_Rom_22082B must retain its original byte length"
	.endif
	.globl gText_Rom_220847
	.set gText_Rom_220847, gText_Rom_22082B + 0x1c
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:986 BattleFrontier_BattleTowerLobby_Text_ChangedYourMind
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22084C
gText_Rom_22084C: @ 0x0822084C
	.string "あれ? やっぱり やめたの?\nきみって きまぐれ なんだね"
	.byte EOS
	.if (. - gText_Rom_22084C) != 0x1e
	.error "gText_Rom_22084C must retain its original byte length"
	.endif
	.globl gText_Rom_220865
	.set gText_Rom_220865, gText_Rom_22084C + 0x19
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:989 BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel
	.globl gText_Rom_22086A
gText_Rom_22086A: @ 0x0822086A
	.string "へえ そんな きぶんに なるんだ!\nなかなか こせいてき だね……\pどうも ありがと!"
	.byte EOS
	.if (. - gText_Rom_22086A) > 0x2c
	.error "gText_Rom_22086A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22086A) < 0x2c
	.space 0x2c - (. - gText_Rom_22086A)
	.endif
