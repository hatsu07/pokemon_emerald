	.globl gUnknown_81DB7E8
gUnknown_81DB7E8: @ 0x081DB7E8
	.incbin "baserom.gba", 0x1db7e8, 0x56b

	@ data/maps/PetalburgCity/scripts.inc:700 PetalburgCity_Text_WhereIsWally
	.globl gText_Rom_1DBD53
gText_Rom_1DBD53: @ 0x081DBD53
	.string "うちの ミツルは どこまで\nあそびに いっちゃったの かしら……\pもう そろそろ シダケタウンに\nでかける じかん だって いうのに……$"
	.if (. - gText_Rom_1DBD53) > 0x45
	.error "gText_Rom_1DBD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBD53) < 0x45
	.space 0x45 - (. - gText_Rom_1DBD53)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:706 PetalburgCity_Text_AreYouRookieTrainer
	.globl gText_Rom_1DBD98
gText_Rom_1DBD98: @ 0x081DBD98
	.string "きみ! もしかして……\nトレーナーに なりたて かい?\pぼくら ポケモン トレーナーは\nあたらしい まちに とうちゃく したら\pまずは そこに どんな ジムがあるのか\nかくにん しておく ものなんだ!$"
	.if (. - gText_Rom_1DBD98) > 0x65
	.error "gText_Rom_1DBD98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBD98) < 0x65
	.space 0x65 - (. - gText_Rom_1DBD98)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:714 PetalburgCity_Text_ThisIsPetalburgGym
	.globl gText_Rom_1DBDFD
gText_Rom_1DBDFD: @ 0x081DBDFD
	.string "ほら ここが トウカシティの ジムさ!$"
	.if (. - gText_Rom_1DBDFD) > 0x14
	.error "gText_Rom_1DBDFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBDFD) < 0x14
	.space 0x14 - (. - gText_Rom_1DBDFD)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:717 PetalburgCity_Text_ThisIsGymSign
	.globl gText_Rom_1DBE11
gText_Rom_1DBE11: @ 0x081DBE11
	.string "これが ジムの かんばん だから\nかたちを よく おぼえておくと いいね!$"
	.if (. - gText_Rom_1DBE11) > 0x26
	.error "gText_Rom_1DBE11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBE11) < 0x26
	.space 0x26 - (. - gText_Rom_1DBE11)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:721 PetalburgCity_Text_WaterReflection
	.globl gText_Rom_1DBE37
gText_Rom_1DBE37: @ 0x081DBE37
	.string "ぼくの かおが すいめんに うつってる……\pきぼうに あふれた\nかがやく えがお……\pふあんと たたかう\nしずかな ちんもく……\pきみの かおは どんなふうに うつってる?$"
	.if (. - gText_Rom_1DBE37) > 0x57
	.error "gText_Rom_1DBE37 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBE37) < 0x57
	.space 0x57 - (. - gText_Rom_1DBE37)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:729 PetalburgCity_Text_FullPartyExplanation
	.globl gText_Rom_1DBE8E
gText_Rom_1DBE8E: @ 0x081DBE8E
	.string "ポケモンを すでに 6ぴき もってるときに\nあたらしく ポケモンを つかまえる\pすると パソコン つうしんで じどうてきに\nボックスに おくられるのだよ!$"
	.if (. - gText_Rom_1DBE8E) > 0x4e
	.error "gText_Rom_1DBE8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBE8E) < 0x4e
	.space 0x4e - (. - gText_Rom_1DBE8E)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:735 PetalburgCity_Text_GymSign
	.globl gText_Rom_1DBEDC
gText_Rom_1DBEDC: @ 0x081DBEDC
	.string "トウカ シティ ポケモンジム\nリーダー センリ\lつよさを おいもとめる おとこ!$"
	.if (. - gText_Rom_1DBEDC) > 0x29
	.error "gText_Rom_1DBEDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBEDC) < 0x29
	.space 0x29 - (. - gText_Rom_1DBEDC)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:740 PetalburgCity_Text_CitySign
	.globl gText_Rom_1DBF05
gText_Rom_1DBF05: @ 0x081DBF05
	.string "ここは トウカ シティ\nしぜんと ひとが ふれあう まち$"
	.if (. - gText_Rom_1DBF05) > 0x1d
	.error "gText_Rom_1DBF05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBF05) < 0x1d
	.space 0x1d - (. - gText_Rom_1DBF05)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:744 PetalburgCity_Text_WallyHouseSign
	.globl gText_Rom_1DBF22
gText_Rom_1DBF22: @ 0x081DBF22
	.string "「ミツルの いえ」$"
	.if (. - gText_Rom_1DBF22) > 0xa
	.error "gText_Rom_1DBF22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBF22) < 0xa
	.space 0xa - (. - gText_Rom_1DBF22)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:747 PetalburgCity_Text_AreYouATrainer
	.globl gText_Rom_1DBF2C
gText_Rom_1DBF2C: @ 0x081DBF2C
	.string "きみ! その いでたちは……\nポケモン トレーナーさん かい?$"
	.if (. - gText_Rom_1DBF2C) > 0x20
	.error "gText_Rom_1DBF2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBF2C) < 0x20
	.space 0x20 - (. - gText_Rom_1DBF2C)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:751 PetalburgCity_Text_WellMaybeNot
	.globl gText_Rom_1DBF4C
gText_Rom_1DBF4C: @ 0x081DBF4C
	.string "…… …… ……\pいや それにしては\nふくが あまり よごれて いない……\pデビューしたての トレーナーか\nあるいは ふつうの おこさま…… かな?$"
	.if (. - gText_Rom_1DBF4C) > 0x4b
	.error "gText_Rom_1DBF4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBF4C) < 0x4b
	.space 0x4b - (. - gText_Rom_1DBF4C)
	.endif

	@ data/maps/PetalburgCity/scripts.inc:758 PetalburgCity_Text_ImLookingForTalentedTrainers
	.globl gText_Rom_1DBF97
gText_Rom_1DBF97: @ 0x081DBF97
	.string "わたしは さいのうある トレーナーを\nさがし もとめて\lかくちを たびして いるんだ\pよびとめたりして すまなかったね$"
	.if (. - gText_Rom_1DBF97) > 0x3c
	.error "gText_Rom_1DBF97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DBF97) < 0x3c
	.space 0x3c - (. - gText_Rom_1DBF97)
	.endif
