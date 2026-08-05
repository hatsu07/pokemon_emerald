	@ data/text/apprentice.inc:133 gText_ApprenticePleaseTeach7
	.globl gText_Rom_26DB75
gText_Rom_26DB75: @ 0x0826DB75
	.string "もし {PLAYER}さんで\nいらっしゃいますか?\pおめに かかれて うれしゅうございます\nわたくし {STR_VAR_1}と もうしますの\l{PLAYER}さんに かねてより\lあこがれて おりました……\p…… …… ……\pあの…… こんな おねがい\nおこまりに なるかも しれませんが…\pわたくしを {PLAYER}さんに\nでしいり させて いただけません?"
	.byte EOS
	.if (. - gText_Rom_26DB75) > 0x9a
	.error "gText_Rom_26DB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DB75) < 0x9a
	.space 0x9a - (. - gText_Rom_26DB75)
	.endif
