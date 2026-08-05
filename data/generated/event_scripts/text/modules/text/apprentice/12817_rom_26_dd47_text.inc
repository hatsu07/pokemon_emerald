	@ data/text/apprentice.inc:145 gText_ApprenticePleaseTeach8
	.globl gText_Rom_26DD47
gText_Rom_26DD47: @ 0x0826DD47
	.string "キャー! キャー!!!\n{PLAYER}さんに はなしかけられた!\lかっ かんげきっ……!\pわたし! {STR_VAR_1}と いいますっ!\nトレーナーに なって すぐに\lポケモンかいの おおもの {PLAYER}さんと\lおはなし できて かんどう してますっ!\pそそそそ そうだ!\n{PLAYER}さん おねがいが!\lわたしを でしに して くださいっ!\lいろいろ おしえて ほしいのですっ!"
	.byte EOS
	.if (. - gText_Rom_26DD47) > 0xab
	.error "gText_Rom_26DD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DD47) < 0xab
	.space 0xab - (. - gText_Rom_26DD47)
	.endif
