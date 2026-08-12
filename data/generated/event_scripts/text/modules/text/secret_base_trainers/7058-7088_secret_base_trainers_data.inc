	@ data/text/secret_base_trainers.inc:139 SecretBase_Text_Trainer8PostBattle
	.globl gText_Rom_24582B
gText_Rom_24582B: @ 0x0824582B
	.string "グッズあつめ まけないわよ!\nまた あそびに きてね!$"
	.if (. - gText_Rom_24582B) > 0x1c
	.error "gText_Rom_24582B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24582B) < 0x1c
	.space 0x1c - (. - gText_Rom_24582B)
	.endif

	@ data/text/secret_base_trainers.inc:142 SecretBase_Text_Trainer8PreChampion
	.globl gText_Rom_245847
gText_Rom_245847: @ 0x08245847
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!$"
	.if (. - gText_Rom_245847) > 0x3e
	.error "gText_Rom_245847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245847) < 0x3e
	.space 0x3e - (. - gText_Rom_245847)
	.endif

	@ data/text/secret_base_trainers.inc:145 SecretBase_Text_Trainer4Intro
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245885
gText_Rom_245885: @ 0x08245885
	.string "すきな ばしょを さがして\nすきな グッズを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pそんな ぼくと しょうぶ しよう!$"
	.if (. - gText_Rom_245885) != 0x4c
	.error "gText_Rom_245885 must retain its original byte length"
	.endif
	.globl gText_Rom_2458CC
	.set gText_Rom_2458CC, gText_Rom_245885 + 0x47

	@ data/text/secret_base_trainers.inc:148 SecretBase_Text_Trainer4AcceptBattle
	.globl gText_Rom_2458D1
gText_Rom_2458D1: @ 0x082458D1
	.string "きみの じつりょくを みせてくれ!$"
	.if (. - gText_Rom_2458D1) > 0x12
	.error "gText_Rom_2458D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2458D1) < 0x12
	.space 0x12 - (. - gText_Rom_2458D1)
	.endif

	@ data/text/secret_base_trainers.inc:151 SecretBase_Text_Trainer4DeclineBattle
	.globl gText_Rom_2458E3
gText_Rom_2458E3: @ 0x082458E3
	.string "まぁ そんな ときも あるよね!$"
	.if (. - gText_Rom_2458E3) > 0x11
	.error "gText_Rom_2458E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2458E3) < 0x11
	.space 0x11 - (. - gText_Rom_2458E3)
	.endif

	@ data/text/secret_base_trainers.inc:154 SecretBase_Text_Trainer4Defeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2458F4
gText_Rom_2458F4: @ 0x082458F4
	.string "きみの じつりょくは じゅうぶん わかった!$"
	.if (. - gText_Rom_2458F4) != 0x17
	.error "gText_Rom_2458F4 must retain its original byte length"
	.endif
	.globl gText_Rom_245906
	.set gText_Rom_245906, gText_Rom_2458F4 + 0x12

	@ data/text/secret_base_trainers.inc:157 SecretBase_Text_Trainer4PostBattle
	.globl gText_Rom_24590B
gText_Rom_24590B: @ 0x0824590B
	.string "きみも ぼくも もっと つよく なれる!\nおたがいに がんばろうね!$"
	.if (. - gText_Rom_24590B) > 0x23
	.error "gText_Rom_24590B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24590B) < 0x23
	.space 0x23 - (. - gText_Rom_24590B)
	.endif

	@ data/text/secret_base_trainers.inc:160 SecretBase_Text_Trainer4PreChampion
	.globl gText_Rom_24592E
gText_Rom_24592E: @ 0x0824592E
	.string "すきな ばしょを さがして\nすきな ものを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pまいにち たのしいねー$"
	.if (. - gText_Rom_24592E) > 0x45
	.error "gText_Rom_24592E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24592E) < 0x45
	.space 0x45 - (. - gText_Rom_24592E)
	.endif

	@ data/text/secret_base_trainers.inc:163 SecretBase_Text_Trainer9Intro
	.globl gText_Rom_245973
gText_Rom_245973: @ 0x08245973
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!\pしょうぶの センスも ためして みる?$"
	.if (. - gText_Rom_245973) > 0x70
	.error "gText_Rom_245973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245973) < 0x70
	.space 0x70 - (. - gText_Rom_245973)
	.endif

	@ data/text/secret_base_trainers.inc:166 SecretBase_Text_Trainer9AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2459E3
gText_Rom_2459E3: @ 0x082459E3
	.string "おもいっきり いくわよ!$"
	.if (. - gText_Rom_2459E3) != 0xd
	.error "gText_Rom_2459E3 must retain its original byte length"
	.endif
	.globl gText_Rom_2459EC
	.set gText_Rom_2459EC, gText_Rom_2459E3 + 0x9

	@ data/text/secret_base_trainers.inc:169 SecretBase_Text_Trainer9DeclineBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2459F0
gText_Rom_2459F0: @ 0x082459F0
	.string "いつでも わたしの センスを みせるわよ!$"
	.if (. - gText_Rom_2459F0) != 0x16
	.error "gText_Rom_2459F0 must retain its original byte length"
	.endif
	.globl gText_Rom_245A02
	.set gText_Rom_245A02, gText_Rom_2459F0 + 0x12

	@ data/text/secret_base_trainers.inc:172 SecretBase_Text_Trainer9Defeated
	.globl gText_Rom_245A06
gText_Rom_245A06: @ 0x08245A06
	.string "すごい さいのうね!\nそこしれぬ つよさを かんじたわ……$"
	.if (. - gText_Rom_245A06) > 0x1e
	.error "gText_Rom_245A06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A06) < 0x1e
	.space 0x1e - (. - gText_Rom_245A06)
	.endif

	@ data/text/secret_base_trainers.inc:175 SecretBase_Text_Trainer9PostBattle
	.globl gText_Rom_245A24
gText_Rom_245A24: @ 0x08245A24
	.string "わたしの センス どうだった?\nもっと センスを みがくわよー$"
	.if (. - gText_Rom_245A24) > 0x20
	.error "gText_Rom_245A24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A24) < 0x20
	.space 0x20 - (. - gText_Rom_245A24)
	.endif

	@ data/text/secret_base_trainers.inc:178 SecretBase_Text_Trainer9PreChampion
	.globl gText_Rom_245A44
gText_Rom_245A44: @ 0x08245A44
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!$"
	.if (. - gText_Rom_245A44) > 0x5c
	.error "gText_Rom_245A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245A44) < 0x5c
	.space 0x5c - (. - gText_Rom_245A44)
	.endif
