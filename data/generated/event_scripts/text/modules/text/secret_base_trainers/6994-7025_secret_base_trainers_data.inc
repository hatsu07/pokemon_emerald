
	@ data/text/secret_base_trainers.inc:49 SecretBase_Text_Trainer1PostBattle
	.globl gText_Rom_245383
gText_Rom_245383: @ 0x08245383
	.string "よしっ ぼくが いつか ひっこしたら\nこの ばしょは きみの ものさ!$"
	.if (. - gText_Rom_245383) > 0x24
	.error "gText_Rom_245383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245383) < 0x24
	.space 0x24 - (. - gText_Rom_245383)
	.endif

	@ data/text/secret_base_trainers.inc:52 SecretBase_Text_Trainer1PreChampion
	.globl gText_Rom_2453A7
gText_Rom_2453A7: @ 0x082453A7
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだよー\pぼくは ずっと まっていて\nやっと つかえる ように なったんだ!$"
	.if (. - gText_Rom_2453A7) > 0x44
	.error "gText_Rom_2453A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2453A7) < 0x44
	.space 0x44 - (. - gText_Rom_2453A7)
	.endif

	@ data/text/secret_base_trainers.inc:55 SecretBase_Text_Trainer6Intro
	.globl gText_Rom_2453EB
gText_Rom_2453EB: @ 0x082453EB
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ\pどう わたしの じつりょく みてみる?$"
	.if (. - gText_Rom_2453EB) > 0x51
	.error "gText_Rom_2453EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2453EB) < 0x51
	.space 0x51 - (. - gText_Rom_2453EB)
	.endif

	@ data/text/secret_base_trainers.inc:58 SecretBase_Text_Trainer6AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24543C
gText_Rom_24543C: @ 0x0824543C
	.string "ほんきで いくわよ!$"
	.if (. - gText_Rom_24543C) != 0xb
	.error "gText_Rom_24543C must retain its original byte length"
	.endif
	.globl gText_Rom_245443
	.set gText_Rom_245443, gText_Rom_24543C + 0x7

	@ data/text/secret_base_trainers.inc:61 SecretBase_Text_Trainer6DeclineBattle
	.globl gText_Rom_245447
gText_Rom_245447: @ 0x08245447
	.string "それじゃ また こんどね!$"
	.if (. - gText_Rom_245447) > 0xe
	.error "gText_Rom_245447 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245447) < 0xe
	.space 0xe - (. - gText_Rom_245447)
	.endif

	@ data/text/secret_base_trainers.inc:64 SecretBase_Text_Trainer6Defeated
	.globl gText_Rom_245455
gText_Rom_245455: @ 0x08245455
	.string "うーん わたしも まだまだねー\nもっと  べんきょう しないと!$"
	.if (. - gText_Rom_245455) > 0x21
	.error "gText_Rom_245455 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245455) < 0x21
	.space 0x21 - (. - gText_Rom_245455)
	.endif

	@ data/text/secret_base_trainers.inc:67 SecretBase_Text_Trainer6PostBattle
	.globl gText_Rom_245476
gText_Rom_245476: @ 0x08245476
	.string "しょうぶ してくれて どうも ありがとう!\nまた あしたも きてねー$"
	.if (. - gText_Rom_245476) > 0x23
	.error "gText_Rom_245476 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245476) < 0x23
	.space 0x23 - (. - gText_Rom_245476)
	.endif

	@ data/text/secret_base_trainers.inc:70 SecretBase_Text_Trainer6PreChampion
	.globl gText_Rom_245499
gText_Rom_245499: @ 0x08245499
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ$"
	.if (. - gText_Rom_245499) > 0x3d
	.error "gText_Rom_245499 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245499) < 0x3d
	.space 0x3d - (. - gText_Rom_245499)
	.endif

	@ data/text/secret_base_trainers.inc:73 SecretBase_Text_Trainer2Intro
	.globl gText_Rom_2454D6
gText_Rom_2454D6: @ 0x082454D6
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!\pどう ポケモン しょうぶでも するかい?$"
	.if (. - gText_Rom_2454D6) > 0x56
	.error "gText_Rom_2454D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2454D6) < 0x56
	.space 0x56 - (. - gText_Rom_2454D6)
	.endif

	@ data/text/secret_base_trainers.inc:76 SecretBase_Text_Trainer2AcceptBattle
	.globl gText_Rom_24552C
gText_Rom_24552C: @ 0x0824552C
	.string "そう こなくっちゃ!$"
	.if (. - gText_Rom_24552C) > 0xb
	.error "gText_Rom_24552C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24552C) < 0xb
	.space 0xb - (. - gText_Rom_24552C)
	.endif

	@ data/text/secret_base_trainers.inc:79 SecretBase_Text_Trainer2DeclineBattle
	.globl gText_Rom_245537
gText_Rom_245537: @ 0x08245537
	.string "よういが できたら\nいつでも こえを かけてね!$"
	.if (. - gText_Rom_245537) > 0x19
	.error "gText_Rom_245537 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245537) < 0x19
	.space 0x19 - (. - gText_Rom_245537)
	.endif

	@ data/text/secret_base_trainers.inc:82 SecretBase_Text_Trainer2Defeated
	.globl gText_Rom_245550
gText_Rom_245550: @ 0x08245550
	.string "やられたー!\nだけど ポケモン しょうぶは たのしいー!$"
	.if (. - gText_Rom_245550) > 0x1d
	.error "gText_Rom_245550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245550) < 0x1d
	.space 0x1d - (. - gText_Rom_245550)
	.endif

	@ data/text/secret_base_trainers.inc:85 SecretBase_Text_Trainer2PostBattle
	.globl gText_Rom_24556D
gText_Rom_24556D: @ 0x0824556D
	.string "さてと グッズでも かいに いこうかな\pぼくの ひみつきちを\nみんなに たのしんで ほしい からね!$"
	.if (. - gText_Rom_24556D) > 0x33
	.error "gText_Rom_24556D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24556D) < 0x33
	.space 0x33 - (. - gText_Rom_24556D)
	.endif

	@ data/text/secret_base_trainers.inc:88 SecretBase_Text_Trainer2PreChampion
	.globl gText_Rom_2455A0
gText_Rom_2455A0: @ 0x082455A0
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!$"
	.if (. - gText_Rom_2455A0) > 0x41
	.error "gText_Rom_2455A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2455A0) < 0x41
	.space 0x41 - (. - gText_Rom_2455A0)
	.endif

	@ data/text/secret_base_trainers.inc:91 SecretBase_Text_Trainer7Intro
	.globl gText_Rom_2455E1
gText_Rom_2455E1: @ 0x082455E1
	.string "わたし グッズの おかいものが\nだいすき です!\pそれと おなじくらい ポケモンを そだてるの\nだいすき です!\pもし よかったら わたしの ポケモンちゃんと\nしょうぶして くれますか?$"
	.if (. - gText_Rom_2455E1) > 0x5e
	.error "gText_Rom_2455E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2455E1) < 0x5e
	.space 0x5e - (. - gText_Rom_2455E1)
	.endif
