	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:222 BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22EDA6
gText_Rom_22EDA6: @ 0x0822EDA6
	.string "よくぞ まいられましたぞ!\p…… …… と いいたい ところ ですが\nわずかに おそかった ですな!!\pすでに われらが たいちょうが\nピラミッドを せいは されましたぞ!!\pしかし ぼうけんしゃよ!\pあなたも トレーナー ならば\nその ちからで たいちょうから\lえいこうの いただきを かちとるのです!\pさあ! じゅんびが できたら\nゆうきの いっぽを ふみだすの ですぞ!"
	.byte EOS
	.if (. - gText_Rom_22EDA6) != 0xbd
	.error "gText_Rom_22EDA6 must retain its original byte length"
	.endif
	.globl gText_Rom_22EE3F
	.set gText_Rom_22EE3F, gText_Rom_22EDA6 + 0x99
	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:225 BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure
	.globl gText_Rom_22EE63
gText_Rom_22EE63: @ 0x0822EE63
	.string "わかき ぼうけんしゃよ……\nぼうけんとは いいもの だな……\pおのれの ちえ!\pおのれの ちから!\pおのれの ポケモン!\pそして なにより\nおのれの ゆうきを ふりしぼって\lみちなる せかいへと つきすすむ……"
	.byte EOS
	.if (. - gText_Rom_22EE63) > 0x6a
	.error "gText_Rom_22EE63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22EE63) < 0x6a
	.space 0x6a - (. - gText_Rom_22EE63)
	.endif
