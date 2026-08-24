	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:216 BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo
	.globl gText_Rom_22ED11
gText_Rom_22ED11: @ 0x0822ED11
	.string "よくぞ まいられましたぞ!\nここは バトルピラミッドの ちょうじょう!\pこの うえに あるのが\nピラミッドのいただき ですぞ!\pバトルピラミッドを せいはした もののみ\nこの うえに たつことが できるのですぞ!\pさあ! のぼってくだされ!"
	.byte EOS
	.if (. - gText_Rom_22ED11) > 0x79
	.error "gText_Rom_22ED11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22ED11) < 0x79
	.space 0x79 - (. - gText_Rom_22ED11)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:219 BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
	.globl BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid
BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid: @ 0x0822ED8A
	.string "あらたなる ピラミッド せいはしゃ!\nそのなは {PLAYER}!"
	.byte EOS
	.if (. - BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid) > 0x1c
	.error "BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:222 BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere
BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere: @ 0x0822EDA6
	.string "よくぞ まいられましたぞ!\p…… …… と いいたい ところ ですが\nわずかに おそかった ですな!!\pすでに われらが たいちょうが\nピラミッドを せいは されましたぞ!!\pしかし ぼうけんしゃよ!\pあなたも トレーナー ならば\nその ちからで たいちょうから\lえいこうの いただきを かちとるのです!\pさあ! じゅんびが できたら\nゆうきの いっぽを ふみだすの ですぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere) != 0xbd
	.error "BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere must retain its original byte length"
	.endif
	.globl gText_Rom_22EE3F
	.set gText_Rom_22EE3F, BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere + 0x99
	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:225 BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure
	.globl BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure
BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure: @ 0x0822EE63
	.string "わかき ぼうけんしゃよ……\nぼうけんとは いいもの だな……\pおのれの ちえ!\pおのれの ちから!\pおのれの ポケモン!\pそして なにより\nおのれの ゆうきを ふりしぼって\lみちなる せかいへと つきすすむ……"
	.byte EOS
	.if (. - BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure) > 0x6a
	.error "BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure) < 0x6a
	.space 0x6a - (. - BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure)
	.endif
