	@ data/text/apprentice.inc:283 gText_ApprenticeItemAlreadyRecommended2
	.globl gText_ApprenticeItemAlreadyRecommended2
gText_ApprenticeItemAlreadyRecommended2: @ 0x0826ED71
	.string "{STR_VAR_1}は\nまえに おしえて もらいましたよ\pそれとは ちがう もちものを\nもたせたいんです\pそれとも {STR_VAR_2}には\nなにも もたせなくて いいんだね?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended2) > 0x49
	.error "gText_ApprenticeItemAlreadyRecommended2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended2) < 0x49
	.space 0x49 - (. - gText_ApprenticeItemAlreadyRecommended2)
	.endif

	@ data/text/apprentice.inc:286 gText_ApprenticeWhatHeldItem3
	.globl gText_ApprenticeWhatHeldItem3
gText_ApprenticeWhatHeldItem3: @ 0x0826EDBA
	.string "{PLAYER}さん こんにちは……\nごめんなさい きょうも あたし\lききたい ことが あるんです\pあたしの ちから だけでは\nしょうぶに かてないかも しれないから\lなにか どうぐを {STR_VAR_1}に\lもたせようかと おもって いるんです\lでも なにが いいのか……\p{PLAYER}さん おねがいします\nあたしの かわりに きめてください!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem3) > 0x9c
	.error "gText_ApprenticeWhatHeldItem3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem3) < 0x9c
	.space 0x9c - (. - gText_ApprenticeWhatHeldItem3)
	.endif

	@ data/text/apprentice.inc:289 gText_ApprenticeHoldNothing3
	.globl gText_ApprenticeHoldNothing3
gText_ApprenticeHoldNothing3: @ 0x0826EE56
	.string "あの あたしなんかの ポケモンには\nなにも もたせないほうが いいんですか?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing3) > 0x27
	.error "gText_ApprenticeHoldNothing3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing3) < 0x27
	.space 0x27 - (. - gText_ApprenticeHoldNothing3)
	.endif

	@ data/text/apprentice.inc:292 gText_ApprenticeThanksNoHeldItem3
	.globl gText_ApprenticeThanksNoHeldItem3
gText_ApprenticeThanksNoHeldItem3: @ 0x0826EE7D
	.string "わかりました……\nどうぐに たよるなって ことですね?\lがんばって みます!\pありがとう ございます!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem3) > 0x34
	.error "gText_ApprenticeThanksNoHeldItem3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem3) < 0x34
	.space 0x34 - (. - gText_ApprenticeThanksNoHeldItem3)
	.endif

	@ data/text/apprentice.inc:295 gText_ApprenticeThanksHeldItem3
	.globl gText_ApprenticeThanksHeldItem3
gText_ApprenticeThanksHeldItem3: @ 0x0826EEB1
	.string "{STR_VAR_1} ですか!\nあたしに みつけられるか……\lいえ! がんばって みます\pありがとう ございます!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem3) > 0x32
	.error "gText_ApprenticeThanksHeldItem3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem3) < 0x32
	.space 0x32 - (. - gText_ApprenticeThanksHeldItem3)
	.endif

	@ data/text/apprentice.inc:298 gText_ApprenticeItemAlreadyRecommended3
	.globl gText_ApprenticeItemAlreadyRecommended3
gText_ApprenticeItemAlreadyRecommended3: @ 0x0826EEE3
	.string "え…… それは\nまえに おしえて いただいたと おもいます\pあ もしかして\nあたしが {STR_VAR_1}を\lつかいこなせて いないから ですか?\pそれとも {STR_VAR_2}には なにも\nもたせるなと いう こと でしょうか?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended3) > 0x64
	.error "gText_ApprenticeItemAlreadyRecommended3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended3) < 0x64
	.space 0x64 - (. - gText_ApprenticeItemAlreadyRecommended3)
	.endif

	@ data/text/apprentice.inc:301 gText_ApprenticeWhatHeldItem4
	.globl gText_ApprenticeWhatHeldItem4
gText_ApprenticeWhatHeldItem4: @ 0x0826EF47
	.string "あら {PLAYER}{KUN}\nちょっと ききたい ことが あるのよ!\pわたし ポケモンは きめて もらったけど\nどの どうぐを もたせるか までは\lきめて もらってない じゃない?\pどうせ なら さいごまで\nあなたが きめて くれない?\lねえ なにが いいかしら?\l{STR_VAR_1}に もたせたいの!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem4) > 0x8a
	.error "gText_ApprenticeWhatHeldItem4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem4) < 0x8a
	.space 0x8a - (. - gText_ApprenticeWhatHeldItem4)
	.endif

	@ data/text/apprentice.inc:304 gText_ApprenticeHoldNothing4
	.globl gText_ApprenticeHoldNothing4
gText_ApprenticeHoldNothing4: @ 0x0826EFD1
	.string "あら! {STR_VAR_1}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing4) > 0x1c
	.error "gText_ApprenticeHoldNothing4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing4) < 0x1c
	.space 0x1c - (. - gText_ApprenticeHoldNothing4)
	.endif

	@ data/text/apprentice.inc:307 gText_ApprenticeThanksNoHeldItem4
	.globl gText_ApprenticeThanksNoHeldItem4
gText_ApprenticeThanksNoHeldItem4: @ 0x0826EFED
	.string "それが よければ そうするわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem4) > 0x44
	.error "gText_ApprenticeThanksNoHeldItem4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem4) < 0x44
	.space 0x44 - (. - gText_ApprenticeThanksNoHeldItem4)
	.endif

	@ data/text/apprentice.inc:310 gText_ApprenticeThanksHeldItem4
	.globl gText_ApprenticeThanksHeldItem4
gText_ApprenticeThanksHeldItem4: @ 0x0826F031
	.string "{STR_VAR_1}か\nわるく ないわね そうするわ!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem4) > 0x48
	.error "gText_ApprenticeThanksHeldItem4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem4) < 0x48
	.space 0x48 - (. - gText_ApprenticeThanksHeldItem4)
	.endif

	@ data/text/apprentice.inc:313 gText_ApprenticeItemAlreadyRecommended4
	.globl gText_ApprenticeItemAlreadyRecommended4
gText_ApprenticeItemAlreadyRecommended4: @ 0x0826F079
	.string "えっ なに いってるのよ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\pそれとも {STR_VAR_2}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended4) > 0x41
	.error "gText_ApprenticeItemAlreadyRecommended4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended4) < 0x41
	.space 0x41 - (. - gText_ApprenticeItemAlreadyRecommended4)
	.endif

	@ data/text/apprentice.inc:316 gText_ApprenticeWhatHeldItem5
	.globl gText_ApprenticeWhatHeldItem5
gText_ApprenticeWhatHeldItem5: @ 0x0826F0BA
	.string "よっ {PLAYER}{KUN}\nいそがしい わりには よく あうよね!\lオレは きょうは\lウォーキング クリーニング それに\lブラッシングと たいへん そのものさ!\pおかげで だいじな {STR_VAR_1}にも\nどうぐ さえ かって やれなくてねー\pあのさ! じかんも ないから\nなにを {STR_VAR_1}に\lもたせて やったら いいか\lそれだけでも アドバイス してよ!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem5) > 0xa4
	.error "gText_ApprenticeWhatHeldItem5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem5) < 0xa4
	.space 0xa4 - (. - gText_ApprenticeWhatHeldItem5)
	.endif

	@ data/text/apprentice.inc:319 gText_ApprenticeHoldNothing5
	.globl gText_ApprenticeHoldNothing5
gText_ApprenticeHoldNothing5: @ 0x0826F15E
	.string "おっ それじゃ\nいそがしい オレの {STR_VAR_1}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing5) > 0x29
	.error "gText_ApprenticeHoldNothing5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing5) < 0x29
	.space 0x29 - (. - gText_ApprenticeHoldNothing5)
	.endif

	@ data/text/apprentice.inc:322 gText_ApprenticeThanksNoHeldItem5
	.globl gText_ApprenticeThanksNoHeldItem5
gText_ApprenticeThanksNoHeldItem5: @ 0x0826F187
	.string "オーケー わかった!\nそれ なら じかんも いらないぜ\pきょうは サンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem5) > 0x30
	.error "gText_ApprenticeThanksNoHeldItem5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem5) < 0x30
	.space 0x30 - (. - gText_ApprenticeThanksNoHeldItem5)
	.endif

	@ data/text/apprentice.inc:325 gText_ApprenticeThanksHeldItem5
	.globl gText_ApprenticeThanksHeldItem5
gText_ApprenticeThanksHeldItem5: @ 0x0826F1B7
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を さがすぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem5) > 0x49
	.error "gText_ApprenticeThanksHeldItem5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem5) < 0x49
	.space 0x49 - (. - gText_ApprenticeThanksHeldItem5)
	.endif

	@ data/text/apprentice.inc:328 gText_ApprenticeItemAlreadyRecommended5
	.globl gText_ApprenticeItemAlreadyRecommended5
gText_ApprenticeItemAlreadyRecommended5: @ 0x0826F200
	.string "あれっ {STR_VAR_1}は\nもう しってるよ!\pん? それとも\nいそがしい オレの {STR_VAR_2}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended5) > 0x3b
	.error "gText_ApprenticeItemAlreadyRecommended5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended5) < 0x3b
	.space 0x3b - (. - gText_ApprenticeItemAlreadyRecommended5)
	.endif

