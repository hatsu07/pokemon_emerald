	@ data/text/apprentice.inc:427 gText_ApprenticeThanksNoHeldItem12
	.globl gText_ApprenticeThanksNoHeldItem12
gText_ApprenticeThanksNoHeldItem12: @ 0x0826FBB9
	.string "もたせないってエェ!\nじゃ いうとおりに するよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem12) > 0x3c
	.error "gText_ApprenticeThanksNoHeldItem12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem12) < 0x3c
	.space 0x3c - (. - gText_ApprenticeThanksNoHeldItem12)
	.endif

	@ data/text/apprentice.inc:430 gText_ApprenticeThanksHeldItem12
	.globl gText_ApprenticeThanksHeldItem12
gText_ApprenticeThanksHeldItem12: @ 0x0826FBF5
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく もたせてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem12) > 0x3c
	.error "gText_ApprenticeThanksHeldItem12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem12) < 0x3c
	.space 0x3c - (. - gText_ApprenticeThanksHeldItem12)
	.endif

	@ data/text/apprentice.inc:433 gText_ApprenticeItemAlreadyRecommended12
	.globl gText_ApprenticeItemAlreadyRecommended12
gText_ApprenticeItemAlreadyRecommended12: @ 0x0826FC31
	.string "ちょっと まったァ!\nその {STR_VAR_1}って\lまえに きいたことが ある!? ある!!\pほかのを おしえて!\nそれとも {STR_VAR_2}には\lなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended12) > 0x52
	.error "gText_ApprenticeItemAlreadyRecommended12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended12) < 0x52
	.space 0x52 - (. - gText_ApprenticeItemAlreadyRecommended12)
	.endif

	@ data/text/apprentice.inc:436 gText_ApprenticeWhatHeldItem13
	.globl gText_ApprenticeWhatHeldItem13
gText_ApprenticeWhatHeldItem13: @ 0x0826FC83
	.string "ギャッ いててっ! {PLAYER}{KUN}\nうでが おれてるから さわらないでよ!\pポケモンに なにを もたせるか\nじぶんで いろいろ ためしすぎちゃって\lうでが おれちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\nどんな どうぐ もたせたら いいとおもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem13) > 0x99
	.error "gText_ApprenticeWhatHeldItem13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem13) < 0x99
	.space 0x99 - (. - gText_ApprenticeWhatHeldItem13)
	.endif

	@ data/text/apprentice.inc:439 gText_ApprenticeHoldNothing13
	.globl gText_ApprenticeHoldNothing13
gText_ApprenticeHoldNothing13: @ 0x0826FD1C
	.string "いてて…… えーっと それって\n{STR_VAR_1}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing13) > 0x2b
	.error "gText_ApprenticeHoldNothing13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing13) < 0x2b
	.space 0x2b - (. - gText_ApprenticeHoldNothing13)
	.endif

	@ data/text/apprentice.inc:442 gText_ApprenticeThanksNoHeldItem13
	.globl gText_ApprenticeThanksNoHeldItem13
gText_ApprenticeThanksNoHeldItem13: @ 0x0826FD47
	.string "ん わかった\nおれも いまは そのほうが たすかるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem13) > 0x31
	.error "gText_ApprenticeThanksNoHeldItem13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem13) < 0x31
	.space 0x31 - (. - gText_ApprenticeThanksNoHeldItem13)
	.endif

	@ data/text/apprentice.inc:445 gText_ApprenticeThanksHeldItem13
	.globl gText_ApprenticeThanksHeldItem13
gText_ApprenticeThanksHeldItem13: @ 0x0826FD78
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ポケモンの うでは ぶじだから\lさっそく もたせてみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem13) > 0x43
	.error "gText_ApprenticeThanksHeldItem13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem13) < 0x43
	.space 0x43 - (. - gText_ApprenticeThanksHeldItem13)
	.endif

	@ data/text/apprentice.inc:448 gText_ApprenticeItemAlreadyRecommended13
	.globl gText_ApprenticeItemAlreadyRecommended13
gText_ApprenticeItemAlreadyRecommended13: @ 0x0826FDBB
	.string "いやいや {STR_VAR_1}は\nこのあいだ おしえて くれただろ?\lもっと すごいの おしえてくれよ!\pあ それとも\n{STR_VAR_2}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended13) > 0x4f
	.error "gText_ApprenticeItemAlreadyRecommended13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended13) < 0x4f
	.space 0x4f - (. - gText_ApprenticeItemAlreadyRecommended13)
	.endif

	@ data/text/apprentice.inc:451 gText_ApprenticeWhatHeldItem14
	.globl gText_ApprenticeWhatHeldItem14
gText_ApprenticeWhatHeldItem14: @ 0x0826FE0A
	.string "あ…… あ……\n{PLAYER}{KUN}……\pそ そんなに みないで くれよ\nワシの ポケモン なにも もってないからさ\pちょっと…… そうだん させて くれよ\nは はずかしいん だけどさ!\l{STR_VAR_1}が なにを\lもったら つよいか って なやんでてさ\l{PLAYER}{KUN} なにが いいと おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem14) > 0x86
	.error "gText_ApprenticeWhatHeldItem14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem14) < 0x86
	.space 0x86 - (. - gText_ApprenticeWhatHeldItem14)
	.endif

	@ data/text/apprentice.inc:454 gText_ApprenticeHoldNothing14
	.globl gText_ApprenticeHoldNothing14
gText_ApprenticeHoldNothing14: @ 0x0826FE90
	.string "じゃ…… {STR_VAR_1}は なにも\nもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing14) > 0x20
	.error "gText_ApprenticeHoldNothing14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing14) < 0x20
	.space 0x20 - (. - gText_ApprenticeHoldNothing14)
	.endif

	@ data/text/apprentice.inc:457 gText_ApprenticeThanksNoHeldItem14
	.globl gText_ApprenticeThanksNoHeldItem14
gText_ApprenticeThanksNoHeldItem14: @ 0x0826FEB0
	.string "よ よし!\nどうぐ なしで いくよ!\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem14) > 0x4a
	.error "gText_ApprenticeThanksNoHeldItem14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem14) < 0x4a
	.space 0x4a - (. - gText_ApprenticeThanksNoHeldItem14)
	.endif

	@ data/text/apprentice.inc:460 gText_ApprenticeThanksHeldItem14
	.globl gText_ApprenticeThanksHeldItem14
gText_ApprenticeThanksHeldItem14: @ 0x0826FEFA
	.string "よ よし!\n{STR_VAR_1}に してみるよ\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem14) > 0x47
	.error "gText_ApprenticeThanksHeldItem14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem14) < 0x47
	.space 0x47 - (. - gText_ApprenticeThanksHeldItem14)
	.endif

	@ data/text/apprentice.inc:463 gText_ApprenticeItemAlreadyRecommended14
	.globl gText_ApprenticeItemAlreadyRecommended14
gText_ApprenticeItemAlreadyRecommended14: @ 0x0826FF41
	.string "それは も もう きいた じゃないか\pて てを ぬかないでくれ!\nワシに はじを かかせないで くれ!\pあ…… それとも\n{STR_VAR_2}は なにも\lもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended14) > 0x58
	.error "gText_ApprenticeItemAlreadyRecommended14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended14) < 0x58
	.space 0x58 - (. - gText_ApprenticeItemAlreadyRecommended14)
	.endif

	@ data/text/apprentice.inc:466 gText_ApprenticeWhatHeldItem15
	.globl gText_ApprenticeWhatHeldItem15
gText_ApprenticeWhatHeldItem15: @ 0x0826FF99
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\lふたごの きょうだい って ことは?\pあっ いやいや いやいや!\nほんもの なら いいんだ わすれてくれ!\lさらに じょげんを おねがい したい!\pこの わたしの {STR_VAR_1}!\nなにか べんりな どうぐを もたせたい\lいったい どれが ふさわしい かな?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem15) > 0x9c
	.error "gText_ApprenticeWhatHeldItem15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem15) < 0x9c
	.space 0x9c - (. - gText_ApprenticeWhatHeldItem15)
	.endif

	@ data/text/apprentice.inc:469 gText_ApprenticeHoldNothing15
	.globl gText_ApprenticeHoldNothing15
gText_ApprenticeHoldNothing15: @ 0x08270035
	.string "なにも もたない ほうが いい……?\nほんとうかね?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing15) > 0x1b
	.error "gText_ApprenticeHoldNothing15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing15) < 0x1b
	.space 0x1b - (. - gText_ApprenticeHoldNothing15)
	.endif

	@ data/text/apprentice.inc:472 gText_ApprenticeThanksNoHeldItem15
	.globl gText_ApprenticeThanksNoHeldItem15
gText_ApprenticeThanksNoHeldItem15: @ 0x08270050
	.string "いや そうか なら いいんだ\nどうも ありがとう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem15) > 0x27
	.error "gText_ApprenticeThanksNoHeldItem15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem15) < 0x27
	.space 0x27 - (. - gText_ApprenticeThanksNoHeldItem15)
	.endif

