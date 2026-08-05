	@ data/text/match_call.inc:388 MatchCall_PersonalizedText59
	.globl gText_Rom_268591
gText_Rom_268591: @ 0x08268591
	.string "じぶんは {STR_VAR_1}だ!\nしゅぎょうの ために また\lムロの ポケモンジムに いってきた!\pジムリーダーの トウキは\nあらなみに もまれ つよくなった!\lなのに ちっとも あせくさく ないし\lもてもてで しょうじき くやしい!\pなかまの シバ という おとこも\nきっと あせくさく なくて\lビッグウェーブ だとか ボク だとか\lさわやかに いったり するのだろう!\p……やきもちは みぐるしいな!\nすまん わすれて くれ! オスっ!$"
	.if (. - gText_Rom_268591) > 0xd6
	.error "gText_Rom_268591 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268591) < 0xd6
	.space 0xd6 - (. - gText_Rom_268591)
	.endif
