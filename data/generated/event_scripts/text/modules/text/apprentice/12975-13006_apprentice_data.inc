	@ data/text/apprentice.inc:379 gText_ApprenticeHoldNothing9
	.globl gText_Rom_26F6F7
gText_Rom_26F6F7: @ 0x0826F6F7
	.string "おっと それは\n{STR_VAR_1}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_Rom_26F6F7) > 0x29
	.error "gText_Rom_26F6F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F6F7) < 0x29
	.space 0x29 - (. - gText_Rom_26F6F7)
	.endif

	@ data/text/apprentice.inc:382 gText_ApprenticeThanksNoHeldItem9
	.globl gText_Rom_26F720
gText_Rom_26F720: @ 0x0826F720
	.string "オーケイ オーケイ!\nおじさん グーっと がんばるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26F720) > 0x36
	.error "gText_Rom_26F720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F720) < 0x36
	.space 0x36 - (. - gText_Rom_26F720)
	.endif

	@ data/text/apprentice.inc:385 gText_ApprenticeThanksHeldItem9
	.globl gText_Rom_26F756
gText_Rom_26F756: @ 0x0826F756
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ゴーっと さがして くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26F756) > 0x41
	.error "gText_Rom_26F756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F756) < 0x41
	.space 0x41 - (. - gText_Rom_26F756)
	.endif

	@ data/text/apprentice.inc:388 gText_ApprenticeItemAlreadyRecommended9
	.globl gText_Rom_26F797
gText_Rom_26F797: @ 0x0826F797
	.string "ノンノン! {STR_VAR_1}は\nまえに おしえて もらったよ!\pお それとも もしや\n{STR_VAR_2}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_Rom_26F797) > 0x46
	.error "gText_Rom_26F797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F797) < 0x46
	.space 0x46 - (. - gText_Rom_26F797)
	.endif

	@ data/text/apprentice.inc:391 gText_ApprenticeWhatHeldItem10
	.globl gText_Rom_26F7DD
gText_Rom_26F7DD: @ 0x0826F7DD
	.string "{PLAYER}{KUN} ちょっと\nしんじられん ことが おきた!\pけさ おきたら ポケモンが\nきんのたまを 10コ もってたんだ!\l…… なーんて うっそさ! うわはは!\pじつは おいら ポケモンの どうぐを\nかんがえる こと なんて\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの {STR_VAR_1}\lなにを もたせたら いいのか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_Rom_26F7DD) > 0xb3
	.error "gText_Rom_26F7DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F7DD) < 0xb3
	.space 0xb3 - (. - gText_Rom_26F7DD)
	.endif

	@ data/text/apprentice.inc:394 gText_ApprenticeHoldNothing10
	.globl gText_Rom_26F890
gText_Rom_26F890: @ 0x0826F890
	.string "どういう ことかな?\nなにも もたせなくて いいんだな?"
	.byte EOS
	.if (. - gText_Rom_26F890) > 0x1d
	.error "gText_Rom_26F890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F890) < 0x1d
	.space 0x1d - (. - gText_Rom_26F890)
	.endif

	@ data/text/apprentice.inc:397 gText_ApprenticeThanksNoHeldItem10
	.globl gText_Rom_26F8AD
gText_Rom_26F8AD: @ 0x0826F8AD
	.string "そうか てぶらで いいのね!\nじゃあ なにか もたせようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26F8AD) > 0x5d
	.error "gText_Rom_26F8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F8AD) < 0x5d
	.space 0x5d - (. - gText_Rom_26F8AD)
	.endif

	@ data/text/apprentice.inc:400 gText_ApprenticeThanksHeldItem10
	.globl gText_Rom_26F90A
gText_Rom_26F90A: @ 0x0826F90A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ それだけは やめとこっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26F90A) > 0x5d
	.error "gText_Rom_26F90A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F90A) < 0x5d
	.space 0x5d - (. - gText_Rom_26F90A)
	.endif

	@ data/text/apprentice.inc:403 gText_ApprenticeItemAlreadyRecommended10
	.globl gText_Rom_26F967
gText_Rom_26F967: @ 0x0826F967
	.string "あー それは いちど\nおしえて もらったことが あるだろ?\lちがうので なにか ないかな?\pそれとも {STR_VAR_2}は\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26F967) > 0x49
	.error "gText_Rom_26F967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F967) < 0x49
	.space 0x49 - (. - gText_Rom_26F967)
	.endif

	@ data/text/apprentice.inc:406 gText_ApprenticeWhatHeldItem11
	.globl gText_Rom_26F9B0
gText_Rom_26F9B0: @ 0x0826F9B0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしが おくる\lそうだんタイム いってみよう!\lどうぐに かんする そうだんだよ!\pわしの {STR_VAR_1}に もたせるなら\nさあ どんな どうぐがいい?"
	.byte EOS
	.if (. - gText_Rom_26F9B0) > 0x69
	.error "gText_Rom_26F9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F9B0) < 0x69
	.space 0x69 - (. - gText_Rom_26F9B0)
	.endif

	@ data/text/apprentice.inc:409 gText_ApprenticeHoldNothing11
	.globl gText_Rom_26FA19
gText_Rom_26FA19: @ 0x0826FA19
	.string "それは あれかな? {STR_VAR_1}は\nなんにも もたなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26FA19) > 0x20
	.error "gText_Rom_26FA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA19) < 0x20
	.space 0x20 - (. - gText_Rom_26FA19)
	.endif

	@ data/text/apprentice.inc:412 gText_ApprenticeThanksNoHeldItem11
	.globl gText_Rom_26FA39
gText_Rom_26FA39: @ 0x0826FA39
	.string "そうかーっ! ようよう!\nそんなら ノリノリで てぶらでいくぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26FA39) > 0x37
	.error "gText_Rom_26FA39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA39) < 0x37
	.space 0x37 - (. - gText_Rom_26FA39)
	.endif

	@ data/text/apprentice.inc:415 gText_ApprenticeThanksHeldItem11
	.globl gText_Rom_26FA70
gText_Rom_26FA70: @ 0x0826FA70
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで もたせてみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26FA70) > 0x37
	.error "gText_Rom_26FA70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA70) < 0x37
	.space 0x37 - (. - gText_Rom_26FA70)
	.endif

	@ data/text/apprentice.inc:418 gText_ApprenticeItemAlreadyRecommended11
	.globl gText_Rom_26FAA7
gText_Rom_26FAA7: @ 0x0826FAA7
	.string "{STR_VAR_1}かーっ! おいおい!\nそれなら きいたことが あるぜ!\lなんか ちがうやつを たのむぜ!\pそれとも あれかな?\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26FAA7) > 0x4c
	.error "gText_Rom_26FAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FAA7) < 0x4c
	.space 0x4c - (. - gText_Rom_26FAA7)
	.endif

	@ data/text/apprentice.inc:421 gText_ApprenticeWhatHeldItem12
	.globl gText_Rom_26FAF3
gText_Rom_26FAF3: @ 0x0826FAF3
	.string "オッケ {PLAYER}さん!\nきょうも みつけたぜェ!\lどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pって {PLAYER}さん オレのこと そろそろ\nきらいに なってる!? なってない!!\lそうだんが あるんだけど きいてェ!\pオレの {STR_VAR_1} なんだけど\nいい どうぐを もたせたいんだ!\lなにが いいか さあ きめて!"
	.byte EOS
	.if (. - gText_Rom_26FAF3) > 0xa3
	.error "gText_Rom_26FAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FAF3) < 0xa3
	.space 0xa3 - (. - gText_Rom_26FAF3)
	.endif

	@ data/text/apprentice.inc:424 gText_ApprenticeHoldNothing12
	.globl gText_Rom_26FB96
gText_Rom_26FB96: @ 0x0826FB96
	.string "エェ!? じゃあ {STR_VAR_1}には\nなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_Rom_26FB96) > 0x23
	.error "gText_Rom_26FB96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FB96) < 0x23
	.space 0x23 - (. - gText_Rom_26FB96)
	.endif

