	@ data/text/secret_base_trainers.inc:94 SecretBase_Text_Trainer7AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24563F
gText_Rom_24563F: @ 0x0824563F
	.string "それでは おねがいします$"
	.if (. - gText_Rom_24563F) != 0xd
	.error "gText_Rom_24563F must retain its original byte length"
	.endif
	.globl gText_Rom_245648
	.set gText_Rom_245648, gText_Rom_24563F + 0x9

	@ data/text/secret_base_trainers.inc:97 SecretBase_Text_Trainer7DeclineBattle
	.globl gText_Rom_24564C
gText_Rom_24564C: @ 0x0824564C
	.string "そう それは ざんねん です…$"
	.if (. - gText_Rom_24564C) > 0x10
	.error "gText_Rom_24564C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24564C) < 0x10
	.space 0x10 - (. - gText_Rom_24564C)
	.endif
	.globl gUnknown_824565C
gUnknown_824565C: @ 0x0824565C

	@ data/text/secret_base_trainers.inc:100 SecretBase_Text_Trainer7Defeated
	.globl gText_Rom_24565C
gText_Rom_24565C: @ 0x0824565C
	.string "まいりました……$"
	.if (. - gText_Rom_24565C) > 0x9
	.error "gText_Rom_24565C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24565C) < 0x9
	.space 0x9 - (. - gText_Rom_24565C)
	.endif

	@ data/text/secret_base_trainers.inc:103 SecretBase_Text_Trainer7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245665
gText_Rom_245665: @ 0x08245665
	.string "ああ たのしかった!\nつぎは おかいものを たのしもう かしら$"
	.if (. - gText_Rom_245665) != 0x20
	.error "gText_Rom_245665 must retain its original byte length"
	.endif
	.globl gText_Rom_245681
	.set gText_Rom_245681, gText_Rom_245665 + 0x1c

	@ data/text/secret_base_trainers.inc:106 SecretBase_Text_Trainer7PreChampion
	.globl gText_Rom_245685
gText_Rom_245685: @ 0x08245685
	.string "わたし グッズの おかいものが\nだいすき です\pそれと おなじくらい ポケモンを そだてるの\nだいすき です$"
	.if (. - gText_Rom_245685) > 0x37
	.error "gText_Rom_245685 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245685) < 0x37
	.space 0x37 - (. - gText_Rom_245685)
	.endif

	@ data/text/secret_base_trainers.inc:109 SecretBase_Text_Trainer3Intro
	.globl gText_Rom_2456BC
gText_Rom_2456BC: @ 0x082456BC
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ……\pうん せっかく みつけて くれたんだから\nポケモン しょうぶ しようか?$"
	.if (. - gText_Rom_2456BC) > 0x5c
	.error "gText_Rom_2456BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2456BC) < 0x5c
	.space 0x5c - (. - gText_Rom_2456BC)
	.endif

	@ data/text/secret_base_trainers.inc:112 SecretBase_Text_Trainer3AcceptBattle
	.globl gText_Rom_245718
gText_Rom_245718: @ 0x08245718
	.string "かんたんには おわらせ ないよ!$"
	.if (. - gText_Rom_245718) > 0x11
	.error "gText_Rom_245718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245718) < 0x11
	.space 0x11 - (. - gText_Rom_245718)
	.endif

	@ data/text/secret_base_trainers.inc:115 SecretBase_Text_Trainer3DeclineBattle
	.globl gText_Rom_245729
gText_Rom_245729: @ 0x08245729
	.string "もしかして さがすのに つかれちゃった?$"
	.if (. - gText_Rom_245729) > 0x15
	.error "gText_Rom_245729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245729) < 0x15
	.space 0x15 - (. - gText_Rom_245729)
	.endif
	.globl gUnknown_824573E
gUnknown_824573E: @ 0x0824573E

	@ data/text/secret_base_trainers.inc:118 SecretBase_Text_Trainer3Defeated
	.globl gText_Rom_24573E
gText_Rom_24573E: @ 0x0824573E
	.string "おわっちゃった……$"
	.if (. - gText_Rom_24573E) > 0xa
	.error "gText_Rom_24573E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24573E) < 0xa
	.space 0xa - (. - gText_Rom_24573E)
	.endif

	@ data/text/secret_base_trainers.inc:121 SecretBase_Text_Trainer3PostBattle
	.globl gText_Rom_245748
gText_Rom_245748: @ 0x08245748
	.string "きみの ひみつきちは どこなんだい!\nこんど あそびに いこうかなー$"
	.if (. - gText_Rom_245748) > 0x23
	.error "gText_Rom_245748 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245748) < 0x23
	.space 0x23 - (. - gText_Rom_245748)
	.endif

	@ data/text/secret_base_trainers.inc:124 SecretBase_Text_Trainer3PreChampion
	.globl gText_Rom_24576B
gText_Rom_24576B: @ 0x0824576B
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ$"
	.if (. - gText_Rom_24576B) > 0x35
	.error "gText_Rom_24576B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24576B) < 0x35
	.space 0x35 - (. - gText_Rom_24576B)
	.endif

	@ data/text/secret_base_trainers.inc:127 SecretBase_Text_Trainer8Intro
	.globl gText_Rom_2457A0
gText_Rom_2457A0: @ 0x082457A0
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!\pついでに ポケモン しょうぶも しない?$"
	.if (. - gText_Rom_2457A0) > 0x53
	.error "gText_Rom_2457A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2457A0) < 0x53
	.space 0x53 - (. - gText_Rom_2457A0)
	.endif

	@ data/text/secret_base_trainers.inc:130 SecretBase_Text_Trainer8AcceptBattle
	.globl gText_Rom_2457F3
gText_Rom_2457F3: @ 0x082457F3
	.string "じぶんの ひみつきちで まけられないわ!$"
	.if (. - gText_Rom_2457F3) > 0x15
	.error "gText_Rom_2457F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2457F3) < 0x15
	.space 0x15 - (. - gText_Rom_2457F3)
	.endif

	@ data/text/secret_base_trainers.inc:133 SecretBase_Text_Trainer8DeclineBattle
	.globl gText_Rom_245808
gText_Rom_245808: @ 0x08245808
	.string "いつでも しょうぶ まってるわ!$"
	.if (. - gText_Rom_245808) > 0x11
	.error "gText_Rom_245808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245808) < 0x11
	.space 0x11 - (. - gText_Rom_245808)
	.endif
	.globl gUnknown_8245819
gUnknown_8245819: @ 0x08245819

	@ data/text/secret_base_trainers.inc:136 SecretBase_Text_Trainer8Defeated
	.globl gText_Rom_245819
gText_Rom_245819: @ 0x08245819
	.string "えっ もしかして わたしの まけ?$"
	.if (. - gText_Rom_245819) > 0x12
	.error "gText_Rom_245819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245819) < 0x12
	.space 0x12 - (. - gText_Rom_245819)
	.endif

