	@ data/text/secret_base_trainers.inc:139 SecretBase_Text_Trainer8PostBattle
	.globl SecretBase_Text_Trainer8PostBattle
SecretBase_Text_Trainer8PostBattle: @ 0x0824582B
	.string "グッズあつめ まけないわよ!\nまた あそびに きてね!{EOS}"
	.if (. - SecretBase_Text_Trainer8PostBattle) > 0x1c
	.error "SecretBase_Text_Trainer8PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8PostBattle) < 0x1c
	.space 0x1c - (. - SecretBase_Text_Trainer8PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:142 SecretBase_Text_Trainer8PreChampion
	.globl SecretBase_Text_Trainer8PreChampion
SecretBase_Text_Trainer8PreChampion: @ 0x08245847
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!{EOS}"
	.if (. - SecretBase_Text_Trainer8PreChampion) > 0x3e
	.error "SecretBase_Text_Trainer8PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8PreChampion) < 0x3e
	.space 0x3e - (. - SecretBase_Text_Trainer8PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:145 SecretBase_Text_Trainer4Intro
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer4Intro
SecretBase_Text_Trainer4Intro: @ 0x08245885
	.string "すきな ばしょを さがして\nすきな グッズを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pそんな ぼくと しょうぶ しよう!{EOS}"
	.if (. - SecretBase_Text_Trainer4Intro) != 0x4c
	.error "SecretBase_Text_Trainer4Intro must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:148 SecretBase_Text_Trainer4AcceptBattle
	.globl SecretBase_Text_Trainer4AcceptBattle
SecretBase_Text_Trainer4AcceptBattle: @ 0x082458D1
	.string "きみの じつりょくを みせてくれ!{EOS}"
	.if (. - SecretBase_Text_Trainer4AcceptBattle) > 0x12
	.error "SecretBase_Text_Trainer4AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4AcceptBattle) < 0x12
	.space 0x12 - (. - SecretBase_Text_Trainer4AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:151 SecretBase_Text_Trainer4DeclineBattle
	.globl SecretBase_Text_Trainer4DeclineBattle
SecretBase_Text_Trainer4DeclineBattle: @ 0x082458E3
	.string "まぁ そんな ときも あるよね!{EOS}"
	.if (. - SecretBase_Text_Trainer4DeclineBattle) > 0x11
	.error "SecretBase_Text_Trainer4DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4DeclineBattle) < 0x11
	.space 0x11 - (. - SecretBase_Text_Trainer4DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:154 SecretBase_Text_Trainer4Defeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer4Defeated
SecretBase_Text_Trainer4Defeated: @ 0x082458F4
	.string "きみの じつりょくは じゅうぶん わかった!{EOS}"
	.if (. - SecretBase_Text_Trainer4Defeated) != 0x17
	.error "SecretBase_Text_Trainer4Defeated must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:157 SecretBase_Text_Trainer4PostBattle
	.globl SecretBase_Text_Trainer4PostBattle
SecretBase_Text_Trainer4PostBattle: @ 0x0824590B
	.string "きみも ぼくも もっと つよく なれる!\nおたがいに がんばろうね!{EOS}"
	.if (. - SecretBase_Text_Trainer4PostBattle) > 0x23
	.error "SecretBase_Text_Trainer4PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4PostBattle) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer4PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:160 SecretBase_Text_Trainer4PreChampion
	.globl SecretBase_Text_Trainer4PreChampion
SecretBase_Text_Trainer4PreChampion: @ 0x0824592E
	.string "すきな ばしょを さがして\nすきな ものを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pまいにち たのしいねー{EOS}"
	.if (. - SecretBase_Text_Trainer4PreChampion) > 0x45
	.error "SecretBase_Text_Trainer4PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4PreChampion) < 0x45
	.space 0x45 - (. - SecretBase_Text_Trainer4PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:163 SecretBase_Text_Trainer9Intro
	.globl SecretBase_Text_Trainer9Intro
SecretBase_Text_Trainer9Intro: @ 0x08245973
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!\pしょうぶの センスも ためして みる?{EOS}"
	.if (. - SecretBase_Text_Trainer9Intro) > 0x70
	.error "SecretBase_Text_Trainer9Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9Intro) < 0x70
	.space 0x70 - (. - SecretBase_Text_Trainer9Intro)
	.endif

	@ data/text/secret_base_trainers.inc:166 SecretBase_Text_Trainer9AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer9AcceptBattle
SecretBase_Text_Trainer9AcceptBattle: @ 0x082459E3
	.string "おもいっきり いくわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer9AcceptBattle) != 0xd
	.error "SecretBase_Text_Trainer9AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:169 SecretBase_Text_Trainer9DeclineBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer9DeclineBattle
SecretBase_Text_Trainer9DeclineBattle: @ 0x082459F0
	.string "いつでも わたしの センスを みせるわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer9DeclineBattle) != 0x16
	.error "SecretBase_Text_Trainer9DeclineBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:172 SecretBase_Text_Trainer9Defeated
	.globl SecretBase_Text_Trainer9Defeated
SecretBase_Text_Trainer9Defeated: @ 0x08245A06
	.string "すごい さいのうね!\nそこしれぬ つよさを かんじたわ……{EOS}"
	.if (. - SecretBase_Text_Trainer9Defeated) > 0x1e
	.error "SecretBase_Text_Trainer9Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9Defeated) < 0x1e
	.space 0x1e - (. - SecretBase_Text_Trainer9Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:175 SecretBase_Text_Trainer9PostBattle
	.globl SecretBase_Text_Trainer9PostBattle
SecretBase_Text_Trainer9PostBattle: @ 0x08245A24
	.string "わたしの センス どうだった?\nもっと センスを みがくわよー{EOS}"
	.if (. - SecretBase_Text_Trainer9PostBattle) > 0x20
	.error "SecretBase_Text_Trainer9PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9PostBattle) < 0x20
	.space 0x20 - (. - SecretBase_Text_Trainer9PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:178 SecretBase_Text_Trainer9PreChampion
	.globl SecretBase_Text_Trainer9PreChampion
SecretBase_Text_Trainer9PreChampion: @ 0x08245A44
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!{EOS}"
	.if (. - SecretBase_Text_Trainer9PreChampion) > 0x5c
	.error "SecretBase_Text_Trainer9PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9PreChampion) < 0x5c
	.space 0x5c - (. - SecretBase_Text_Trainer9PreChampion)
	.endif
