	@ field-script:0x244104 FieldScriptText_243B4E
	.globl FieldScriptText_243B4E
FieldScriptText_243B4E: @ 0x08243B4E
	.string "{0xFD}{0x01}の　てもとには\nたたかえるポケモンが　もういない！\p{0xFD}{0x01}は\nめのまえが　まっくらに　なった！{EOS}"
	.if (. - FieldScriptText_243B4E) > 0x31
	.error "FieldScriptText_243B4E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243B4E) < 0x31
	.space 0x31 - (. - FieldScriptText_243B4E)
	.endif
	@ field-script:0x244D04 FieldScriptText_243B7F
	.globl FieldScriptText_243B7F
FieldScriptText_243B7F: @ 0x08243B7F
	.string "{0xFD}{0x02}の　{0xFD}{0x03}を\nポケナビに　とうろく　した！{EOS}"
	.if (. - FieldScriptText_243B7F) > 0x17
	.error "FieldScriptText_243B7F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243B7F) < 0x17
	.space 0x17 - (. - FieldScriptText_243B7F)
	.endif
	@ field-script:0x1DC504 FieldScriptText_243B96
	.globl FieldScriptText_243B96
FieldScriptText_243B96: @ 0x08243B96
	.string "「ひみつのちから」って\nわざマシン　しってる？\pおれら　わざマシン　「ひみつのちから」が\nだいすき　なんだ\pおれらの　メンバーが　どこかで　くれるから\nそれを　もらったら　また　おいで！\pきみも　メンバーとして\nひみつで　いいものを　うってあげるよ{EOS}"
	.if (. - FieldScriptText_243B96) > 0x7d
	.error "FieldScriptText_243B96 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243B96) < 0x7d
	.space 0x7d - (. - FieldScriptText_243B96)
	.endif
	@ field-script:0x242AFA FieldScriptText_243C13
	.globl FieldScriptText_243C13
FieldScriptText_243C13: @ 0x08243C13
	.string "おあずかりした　ポケモンに\nポケルスが　ついて　いるようです\pくわしいことは　わかって　いないのですが\nポケルスと　いうのは　ポケモンに　くっつく\lちいさな　せいめいたいで\lこれが　ついている　あいだ\lポケモンが　よく　そだつ　みたいです{EOS}"
	.if (. - FieldScriptText_243C13) > 0x78
	.error "FieldScriptText_243C13 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_243C13) < 0x78
	.space 0x78 - (. - FieldScriptText_243C13)
	.endif
	@ data/text/surf.inc:1 gText_WantToUseSurf
	.globl gText_WantToUseSurf
gText_WantToUseSurf: @ 0x08243C8B
	.string "みずは ふかい あおに そまっている……\nなみのりを つかいますか?{EOS}"
	.if (. - gText_WantToUseSurf) > 0x23
	.error "gText_WantToUseSurf may not grow beyond its original slot"
	.endif
	.if (. - gText_WantToUseSurf) < 0x23
	.space 0x23 - (. - gText_WantToUseSurf)
	.endif

	@ data/text/surf.inc:5 gText_PlayerUsedSurf
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PlayerUsedSurf
gText_PlayerUsedSurf: @ 0x08243CAE
	.string "{STR_VAR_1}は\nなみのりを つかった!{EOS}"
	.if (. - gText_PlayerUsedSurf) != 0x10
	.error "gText_PlayerUsedSurf must retain its original byte length"
	.endif
