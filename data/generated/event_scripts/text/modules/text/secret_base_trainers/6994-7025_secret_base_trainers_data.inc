
	@ data/text/secret_base_trainers.inc:49 SecretBase_Text_Trainer1PostBattle
	.globl SecretBase_Text_Trainer1PostBattle
SecretBase_Text_Trainer1PostBattle: @ 0x08245383
	.string "よしっ ぼくが いつか ひっこしたら\nこの ばしょは きみの ものさ!{EOS}"
	.if (. - SecretBase_Text_Trainer1PostBattle) > 0x24
	.error "SecretBase_Text_Trainer1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1PostBattle) < 0x24
	.space 0x24 - (. - SecretBase_Text_Trainer1PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:52 SecretBase_Text_Trainer1PreChampion
	.globl SecretBase_Text_Trainer1PreChampion
SecretBase_Text_Trainer1PreChampion: @ 0x082453A7
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだよー\pぼくは ずっと まっていて\nやっと つかえる ように なったんだ!{EOS}"
	.if (. - SecretBase_Text_Trainer1PreChampion) > 0x44
	.error "SecretBase_Text_Trainer1PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1PreChampion) < 0x44
	.space 0x44 - (. - SecretBase_Text_Trainer1PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:55 SecretBase_Text_Trainer6Intro
	.globl SecretBase_Text_Trainer6Intro
SecretBase_Text_Trainer6Intro: @ 0x082453EB
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ\pどう わたしの じつりょく みてみる?{EOS}"
	.if (. - SecretBase_Text_Trainer6Intro) > 0x51
	.error "SecretBase_Text_Trainer6Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6Intro) < 0x51
	.space 0x51 - (. - SecretBase_Text_Trainer6Intro)
	.endif

	@ data/text/secret_base_trainers.inc:58 SecretBase_Text_Trainer6AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer6AcceptBattle
SecretBase_Text_Trainer6AcceptBattle: @ 0x0824543C
	.string "ほんきで いくわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer6AcceptBattle) != 0xb
	.error "SecretBase_Text_Trainer6AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:61 SecretBase_Text_Trainer6DeclineBattle
	.globl SecretBase_Text_Trainer6DeclineBattle
SecretBase_Text_Trainer6DeclineBattle: @ 0x08245447
	.string "それじゃ また こんどね!{EOS}"
	.if (. - SecretBase_Text_Trainer6DeclineBattle) > 0xe
	.error "SecretBase_Text_Trainer6DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6DeclineBattle) < 0xe
	.space 0xe - (. - SecretBase_Text_Trainer6DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:64 SecretBase_Text_Trainer6Defeated
	.globl SecretBase_Text_Trainer6Defeated
SecretBase_Text_Trainer6Defeated: @ 0x08245455
	.string "うーん わたしも まだまだねー\nもっと  べんきょう しないと!{EOS}"
	.if (. - SecretBase_Text_Trainer6Defeated) > 0x21
	.error "SecretBase_Text_Trainer6Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6Defeated) < 0x21
	.space 0x21 - (. - SecretBase_Text_Trainer6Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:67 SecretBase_Text_Trainer6PostBattle
	.globl SecretBase_Text_Trainer6PostBattle
SecretBase_Text_Trainer6PostBattle: @ 0x08245476
	.string "しょうぶ してくれて どうも ありがとう!\nまた あしたも きてねー{EOS}"
	.if (. - SecretBase_Text_Trainer6PostBattle) > 0x23
	.error "SecretBase_Text_Trainer6PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6PostBattle) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer6PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:70 SecretBase_Text_Trainer6PreChampion
	.globl SecretBase_Text_Trainer6PreChampion
SecretBase_Text_Trainer6PreChampion: @ 0x08245499
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ{EOS}"
	.if (. - SecretBase_Text_Trainer6PreChampion) > 0x3d
	.error "SecretBase_Text_Trainer6PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6PreChampion) < 0x3d
	.space 0x3d - (. - SecretBase_Text_Trainer6PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:73 SecretBase_Text_Trainer2Intro
	.globl SecretBase_Text_Trainer2Intro
SecretBase_Text_Trainer2Intro: @ 0x082454D6
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!\pどう ポケモン しょうぶでも するかい?{EOS}"
	.if (. - SecretBase_Text_Trainer2Intro) > 0x56
	.error "SecretBase_Text_Trainer2Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2Intro) < 0x56
	.space 0x56 - (. - SecretBase_Text_Trainer2Intro)
	.endif

	@ data/text/secret_base_trainers.inc:76 SecretBase_Text_Trainer2AcceptBattle
	.globl SecretBase_Text_Trainer2AcceptBattle
SecretBase_Text_Trainer2AcceptBattle: @ 0x0824552C
	.string "そう こなくっちゃ!{EOS}"
	.if (. - SecretBase_Text_Trainer2AcceptBattle) > 0xb
	.error "SecretBase_Text_Trainer2AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2AcceptBattle) < 0xb
	.space 0xb - (. - SecretBase_Text_Trainer2AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:79 SecretBase_Text_Trainer2DeclineBattle
	.globl SecretBase_Text_Trainer2DeclineBattle
SecretBase_Text_Trainer2DeclineBattle: @ 0x08245537
	.string "よういが できたら\nいつでも こえを かけてね!{EOS}"
	.if (. - SecretBase_Text_Trainer2DeclineBattle) > 0x19
	.error "SecretBase_Text_Trainer2DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2DeclineBattle) < 0x19
	.space 0x19 - (. - SecretBase_Text_Trainer2DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:82 SecretBase_Text_Trainer2Defeated
	.globl SecretBase_Text_Trainer2Defeated
SecretBase_Text_Trainer2Defeated: @ 0x08245550
	.string "やられたー!\nだけど ポケモン しょうぶは たのしいー!{EOS}"
	.if (. - SecretBase_Text_Trainer2Defeated) > 0x1d
	.error "SecretBase_Text_Trainer2Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2Defeated) < 0x1d
	.space 0x1d - (. - SecretBase_Text_Trainer2Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:85 SecretBase_Text_Trainer2PostBattle
	.globl SecretBase_Text_Trainer2PostBattle
SecretBase_Text_Trainer2PostBattle: @ 0x0824556D
	.string "さてと グッズでも かいに いこうかな\pぼくの ひみつきちを\nみんなに たのしんで ほしい からね!{EOS}"
	.if (. - SecretBase_Text_Trainer2PostBattle) > 0x33
	.error "SecretBase_Text_Trainer2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2PostBattle) < 0x33
	.space 0x33 - (. - SecretBase_Text_Trainer2PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:88 SecretBase_Text_Trainer2PreChampion
	.globl SecretBase_Text_Trainer2PreChampion
SecretBase_Text_Trainer2PreChampion: @ 0x082455A0
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!{EOS}"
	.if (. - SecretBase_Text_Trainer2PreChampion) > 0x41
	.error "SecretBase_Text_Trainer2PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2PreChampion) < 0x41
	.space 0x41 - (. - SecretBase_Text_Trainer2PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:91 SecretBase_Text_Trainer7Intro
	.globl SecretBase_Text_Trainer7Intro
SecretBase_Text_Trainer7Intro: @ 0x082455E1
	.string "わたし グッズの おかいものが\nだいすき です!\pそれと おなじくらい ポケモンを そだてるの\nだいすき です!\pもし よかったら わたしの ポケモンちゃんと\nしょうぶして くれますか?{EOS}"
	.if (. - SecretBase_Text_Trainer7Intro) > 0x5e
	.error "SecretBase_Text_Trainer7Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7Intro) < 0x5e
	.space 0x5e - (. - SecretBase_Text_Trainer7Intro)
	.endif
