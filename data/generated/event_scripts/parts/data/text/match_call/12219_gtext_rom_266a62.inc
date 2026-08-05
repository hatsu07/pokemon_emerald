	@ data/text/match_call.inc:232 MatchCall_PersonalizedText7
	.globl gText_Rom_266A62
gText_Rom_266A62: @ 0x08266A62
	.string "やあ {STR_VAR_1} だけど……\pエリートトレーナー の せいかつに\nちょっと つかれちゃってね……\pみんな ぼくのことを\nかんぺきな トレーナーだと おもうから\lぼくも それらしく しないと いけない\pでも それも エリートトレーナーの\nしゅくめいだと おもって\lがんばる ことに するよ!\pこんな ことが いえるのは キミだけだ\nでも こんど あった ときは\lよわねは はかないから あんしんして!\lじゃ!$"
	.if (. - gText_Rom_266A62) > 0xc9
	.error "gText_Rom_266A62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266A62) < 0xc9
	.space 0xc9 - (. - gText_Rom_266A62)
	.endif
