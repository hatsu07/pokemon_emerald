	@ data/text/apprentice.inc:49 gText_ApprenticePleaseTeach0
	.globl gText_Rom_26CF80
gText_Rom_26CF80: @ 0x0826CF80
	.string "も もしかして {PLAYER}さん……?\lああ! グスっ……\pあ…… ごめんなさい!\nきんちょう して なみだが でちゃった……\pぼくは {STR_VAR_1} って いって\n{PLAYER}さんに あこがれて います!\lい いつか {PLAYER}さんに あって\lポケモンのこと おしえて もらう って\lゆめ みて いたんです……! うう……\pあのう あのう {PLAYER}さん!\nできたら…… ポケモンのこと\lおしえて ください!"
	.byte EOS
	.if (. - gText_Rom_26CF80) > 0xbb
	.error "gText_Rom_26CF80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF80) < 0xbb
	.space 0xbb - (. - gText_Rom_26CF80)
	.endif
