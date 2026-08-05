	@ data/text/match_call.inc:352 MatchCall_PersonalizedText47
	.globl gText_Rom_267FAF
gText_Rom_267FAF: @ 0x08267FAF
	.string "あ {PLAYER}{KUN} こんにちは!\n{STR_VAR_1} です\pここって じめんが でこぼこ してるから\nテント はれないのよね……\lせっかく やまに きたのに……\pあ! いいこと おもいついた!\nポケモンで ここを たいらに\lできないかしら?\pよーし がんばっちゃおう!\nじゃあ またね!$"
	.if (. - gText_Rom_267FAF) > 0x86
	.error "gText_Rom_267FAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267FAF) < 0x86
	.space 0x86 - (. - gText_Rom_267FAF)
	.endif
