	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:562 BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge
	.globl gText_Rom_22795A
gText_Rom_22795A: @ 0x0822795A
	.string "ダブル バトルトーナメントは\nダブルバトルで おこなわれる\lトーナメントたいかい です\pさんかする かたには しゅつじょう させる\nポケモンを 3ひき えらんで いただきます\pしあいでは 3ひきの てもち ポケモンから\n1ひきを ひかえにして\l2ひきによる ダブルバトルの\lたいせんを おこないます\pだす ポケモンは たいせん あいての\nポケモンを よくみて えらんで くださいね\pトーナメントを 4かい かちすすむと\nみごと ゆうしょうと なります\pゆうしょうされると バトルポイントが\nもらえますので がんばってください!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lちゃんと レポートを かかないと\lつづけて ちょうせんが できないので\lきをつけて くださいね$"
	.if (. - gText_Rom_22795A) > 0x156
	.error "gText_Rom_22795A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22795A) < 0x156
	.space 0x156 - (. - gText_Rom_22795A)
	.endif
