	@ data/text/apprentice.inc:475 gText_ApprenticeThanksHeldItem15
	.globl gText_Rom_270077
gText_Rom_270077: @ 0x08270077
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lつかいこなせると いいな\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270077) > 0x52
	.error "gText_Rom_270077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270077) < 0x52
	.space 0x52 - (. - gText_Rom_270077)
	.endif

	@ data/text/apprentice.inc:478 gText_ApprenticeItemAlreadyRecommended15
	.globl gText_Rom_2700C9
gText_Rom_2700C9: @ 0x082700C9
	.string "いやいや まってくれ\nそれは まえに おしえてくれた だろう\lそれとは ちがった ものを\lすすめられて みたいんだ\pそれとも {STR_VAR_2}は\nなにも もたない ほうが いい……?\lほんとうかね?"
	.byte EOS
	.if (. - gText_Rom_2700C9) > 0x5e
	.error "gText_Rom_2700C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2700C9) < 0x5e
	.space 0x5e - (. - gText_Rom_2700C9)
	.endif

	@ data/text/apprentice.inc:481 gText_ApprenticeWhichMonFirst0
	.globl gText_Rom_270127
gText_Rom_270127: @ 0x08270127
	.string "えーん {PLAYER}さーん!\nぼく こまって いるんです グスン\pそろそろ しょうぶを して みたいけど\nポケモンを どんな じゅんばんで\lだしたら つよいのか わかんない……\p{PLAYER}さん だったら\nどの ポケモンを さいしょに だすか\l……おしえて ください!"
	.byte EOS
	.if (. - gText_Rom_270127) > 0x7f
	.error "gText_Rom_270127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270127) < 0x7f
	.space 0x7f - (. - gText_Rom_270127)
	.endif

	@ data/text/apprentice.inc:484 gText_ApprenticeMonFirstThanks0
	.globl gText_Rom_2701A6
gText_Rom_2701A6: @ 0x082701A6
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\nじゅんばんが きまった うれしさで\lなみだが……\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_2701A6) > 0x46
	.error "gText_Rom_2701A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2701A6) < 0x46
	.space 0x46 - (. - gText_Rom_2701A6)
	.endif

	@ data/text/apprentice.inc:487 gText_ApprenticeWhichMonFirst1
	.globl gText_Rom_2701EC
gText_Rom_2701EC: @ 0x082701EC
	.string "わわっ! {PLAYER}さんだー!\nわーい あえて よかった\lそうだん したいことが あるんだ!\pあのね ぼくの もってる\nポケモン たちの なかで\lどれを さいしょに だせば\lいいと おもう?"
	.byte EOS
	.if (. - gText_Rom_2701EC) > 0x5d
	.error "gText_Rom_2701EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2701EC) < 0x5d
	.space 0x5d - (. - gText_Rom_2701EC)
	.endif

	@ data/text/apprentice.inc:490 gText_ApprenticeMonFirstThanks1
	.globl gText_Rom_270249
gText_Rom_270249: @ 0x08270249
	.string "{STR_VAR_1}かあ そーだよね!\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_270249) > 0x22
	.error "gText_Rom_270249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270249) < 0x22
	.space 0x22 - (. - gText_Rom_270249)
	.endif

	@ data/text/apprentice.inc:493 gText_ApprenticeWhichMonFirst2
	.globl gText_Rom_27026B
gText_Rom_27026B: @ 0x0827026B
	.string "{PLAYER}さん こんにちは!\nしょうぶのときって さいしょに\pどの ポケモンを だすのかが\nとても だいじな きが するんです!\pぼくが もってる ポケモンの なかで\nどの ポケモンを\lさいしょに だすと いいでしょうか?"
	.byte EOS
	.if (. - gText_Rom_27026B) > 0x6d
	.error "gText_Rom_27026B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27026B) < 0x6d
	.space 0x6d - (. - gText_Rom_27026B)
	.endif

	@ data/text/apprentice.inc:496 gText_ApprenticeMonFirstThanks2
	.globl gText_Rom_2702D8
gText_Rom_2702D8: @ 0x082702D8
	.string "{STR_VAR_1} ですね!\nわかりました!\pじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_2702D8) > 0x18
	.error "gText_Rom_2702D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2702D8) < 0x18
	.space 0x18 - (. - gText_Rom_2702D8)
	.endif

	@ data/text/apprentice.inc:499 gText_ApprenticeWhichMonFirst3
	.globl gText_Rom_2702F0
gText_Rom_2702F0: @ 0x082702F0
	.string "{PLAYER}さん いつも\nそうだん ばかりで すみません……\lあたし じしんが なくって\l{PLAYER}さんが いないと……!\pあの ポケモンの じゅんばん って……\nどうすれば いいと おもいますか?\pあたし なんかが こだわっても\nしかたが ないかも しれません けど\lどうしても きめられなくて……\pどの ポケモンを 1ばん\nせんとうに すれば よいんでしょうか!"
	.byte EOS
	.if (. - gText_Rom_2702F0) > 0xb1
	.error "gText_Rom_2702F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2702F0) < 0xb1
	.space 0xb1 - (. - gText_Rom_2702F0)
	.endif

	@ data/text/apprentice.inc:502 gText_ApprenticeMonFirstThanks3
	.globl gText_Rom_2703A1
gText_Rom_2703A1: @ 0x082703A1
	.string "{STR_VAR_1} ですか わかりました!\pこんな あたし なんかに\nなんども こたえて いただけるなんて\lしんじられない!\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_Rom_2703A1) > 0x59
	.error "gText_Rom_2703A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2703A1) < 0x59
	.space 0x59 - (. - gText_Rom_2703A1)
	.endif

	@ data/text/apprentice.inc:505 gText_ApprenticeWhichMonFirst4
	.globl gText_Rom_2703FA
gText_Rom_2703FA: @ 0x082703FA
	.string "{PLAYER}{KUN}! わたしよ\nよかったわ こまっていたの!\pちょっと ポケモンの じゅんばんを\nきめて もらえる かしら!\lと いっても そうねえ\lとりあえず 1ばんめの ポケモンで いいわ\lどの ポケモンに したら いいかしら?"
	.byte EOS
	.if (. - gText_Rom_2703FA) > 0x70
	.error "gText_Rom_2703FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2703FA) < 0x70
	.space 0x70 - (. - gText_Rom_2703FA)
	.endif

	@ data/text/apprentice.inc:508 gText_ApprenticeMonFirstThanks4
	.globl gText_Rom_27046A
gText_Rom_27046A: @ 0x0827046A
	.string "{STR_VAR_1}ね いいわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_27046A) > 0x3d
	.error "gText_Rom_27046A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27046A) < 0x3d
	.space 0x3d - (. - gText_Rom_27046A)
	.endif

	@ data/text/apprentice.inc:511 gText_ApprenticeWhichMonFirst5
	.globl gText_Rom_2704A7
gText_Rom_2704A7: @ 0x082704A7
	.string "ハイ! オレの せんせい\n{PLAYER}{KUN}!\pきょうも いそがしいんだ オレ\nサイクリングに ショッピングに ハミング!\pしょうぶに つかう ポケモンの\nじゅんばんさえ きめられなくてねー\pあのさ!\nちょっと オレの ポケモン みてよ!\lで どいつが はじめに でれば いいかな?"
	.byte EOS
	.if (. - gText_Rom_2704A7) > 0x89
	.error "gText_Rom_2704A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2704A7) < 0x89
	.space 0x89 - (. - gText_Rom_2704A7)
	.endif

	@ data/text/apprentice.inc:514 gText_ApprenticeMonFirstThanks5
	.globl gText_Rom_270530
gText_Rom_270530: @ 0x08270530
	.string "オーケー わかった!\n{STR_VAR_1}を せんとうに する\nじかん くらいは あるぜ!\p……と いけね かのじょが まってる!\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_270530) > 0x49
	.error "gText_Rom_270530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270530) < 0x49
	.space 0x49 - (. - gText_Rom_270530)
	.endif

	@ data/text/apprentice.inc:517 gText_ApprenticeWhichMonFirst6
	.globl gText_Rom_270579
gText_Rom_270579: @ 0x08270579
	.string "ヤッホー ハーイ {PLAYER}さーん\nいつも つよそうな かおで あるいてるわね\pねえねえ! きょうも\nあれ…… おねがい! いいでしょ!\pジャーン では ほんじつの そうだん!\nわたしが もっている ポケモン!\lさあ どのコを いちばん\lさいしょに だせば いいでしょう?"
	.byte EOS
	.if (. - gText_Rom_270579) > 0x86
	.error "gText_Rom_270579 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270579) < 0x86
	.space 0x86 - (. - gText_Rom_270579)
	.endif

	@ data/text/apprentice.inc:520 gText_ApprenticeMonFirstThanks6
	.globl gText_Rom_2705FF
gText_Rom_2705FF: @ 0x082705FF
	.string "ふむふむ!\n{STR_VAR_1} ですねぇ?\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_2705FF) > 0x47
	.error "gText_Rom_2705FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2705FF) < 0x47
	.space 0x47 - (. - gText_Rom_2705FF)
	.endif

