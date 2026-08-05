	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:453 BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge
	.globl gText_Rom_2274DB
gText_Rom_2274DB: @ 0x082274DB
	.string "シングル バトルトーナメントは\nシングルバトルで おこなわれる\lトーナメントたいかい です\pさんかする かたには しゅつじょう させる\nポケモンを 3ひき えらんで いただきます\pしあいでは 3ひきの てもち ポケモンから\n1ひきを ひかえにして\l2ひきずつで たいせんを おこないます\pだす ポケモンは たいせん あいての\nポケモンを よくみて えらんで くださいね\pトーナメントを 4かい かちすすむと\nみごと ゆうしょうと なります\pバトルポイントが もらえますので\nがんばって くださいね!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lちゃんと レポートを かかないと\lつづけて ちょうせんが できないので\lきをつけて くださいね!$"
	.if (. - gText_Rom_2274DB) > 0x149
	.error "gText_Rom_2274DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2274DB) < 0x149
	.space 0x149 - (. - gText_Rom_2274DB)
	.endif
