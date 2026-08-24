	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:971 BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
	.globl BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower
BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower: @ 0x08220781
	.string "ねえねえ!\pバトルタワーで これから しょうぶだ!\n……ってとき とか\pかったり まけたり したときって\nどんな きもち なのか おしえてよ!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower) > 0x48
	.error "BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower) < 0x48
	.space 0x48 - (. - BattleFrontier_BattleTowerLobby_Text_DescribeFeelingsAboutBattleTower)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:974 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin
	.globl BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin: @ 0x082207C9
	.string "じゃあ さっそく\nしょうぶに いどむときの きもちを……"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin) > 0x1d
	.error "BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouBegin)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:977 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon
	.globl BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon: @ 0x082207E6
	.string "じゃあ しょうぶに かったときの\nきもちを きかせて もらおうかなー"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon) > 0x23
	.error "BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveWon)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:980 BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost
	.globl BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost
BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost: @ 0x08220809
	.string "しょうぶに まけちゃったとき\nどんな きもちを なるか きかせて!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost) > 0x22
	.error "BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost) < 0x22
	.space 0x22 - (. - BattleFrontier_BattleTowerLobby_Text_FeelWhatWhenYouveLost)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:983 BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt
BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt: @ 0x0822082B
	.string "とくに なにも おもわないって こと?\nきみって クールなんだね"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt) != 0x21
	.error "BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt must retain its original byte length"
	.endif
	.globl gText_Rom_220847
	.set gText_Rom_220847, BattleFrontier_BattleTowerLobby_Text_DontThinkMuchAboutIt + 0x1c
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:986 BattleFrontier_BattleTowerLobby_Text_ChangedYourMind
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_ChangedYourMind
BattleFrontier_BattleTowerLobby_Text_ChangedYourMind: @ 0x0822084C
	.string "あれ? やっぱり やめたの?\nきみって きまぐれ なんだね"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ChangedYourMind) != 0x1e
	.error "BattleFrontier_BattleTowerLobby_Text_ChangedYourMind must retain its original byte length"
	.endif
	.globl gText_Rom_220865
	.set gText_Rom_220865, BattleFrontier_BattleTowerLobby_Text_ChangedYourMind + 0x19
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:989 BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel
	.globl BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel
BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel: @ 0x0822086A
	.string "へえ そんな きぶんに なるんだ!\nなかなか こせいてき だね……\pどうも ありがと!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel) > 0x2c
	.error "BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel) < 0x2c
	.space 0x2c - (. - BattleFrontier_BattleTowerLobby_Text_ThatsHowYouFeel)
	.endif
