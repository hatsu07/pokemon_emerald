	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:971 BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
	.globl gText_Rom_220781
gText_Rom_220781: @ 0x08220781
	.string "ねえねえ!\pバトルタワーで これから しょうぶだ!\n……ってとき とか\pかったり まけたり したときって\nどんな きもち なのか おしえてよ!"
	.byte EOS
	.if (. - gText_Rom_220781) > 0x48
	.error "gText_Rom_220781 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220781) < 0x48
	.space 0x48 - (. - gText_Rom_220781)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:974 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin
	.globl gText_Rom_2207C9
gText_Rom_2207C9: @ 0x082207C9
	.string "じゃあ さっそく\nしょうぶに いどむときの きもちを……"
	.byte EOS
	.if (. - gText_Rom_2207C9) > 0x1d
	.error "gText_Rom_2207C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2207C9) < 0x1d
	.space 0x1d - (. - gText_Rom_2207C9)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:977 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon
	.globl gText_Rom_2207E6
gText_Rom_2207E6: @ 0x082207E6
	.string "じゃあ しょうぶに かったときの\nきもちを きかせて もらおうかなー"
	.byte EOS
	.if (. - gText_Rom_2207E6) > 0x23
	.error "gText_Rom_2207E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2207E6) < 0x23
	.space 0x23 - (. - gText_Rom_2207E6)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:980 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost
	.globl gText_Rom_220809
gText_Rom_220809: @ 0x08220809
	.string "しょうぶに まけちゃったとき\nどんな きもちを なるか きかせて!"
	.byte EOS
	.if (. - gText_Rom_220809) > 0x22
	.error "gText_Rom_220809 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220809) < 0x22
	.space 0x22 - (. - gText_Rom_220809)
	.endif
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
