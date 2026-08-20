	@ data/maps/EverGrandeCity_ChampionsRoom/scripts.inc:222 EverGrandeCity_ChampionsRoom_Text_IntroSpeech
	.globl gText_Rom_210B2D
gText_Rom_210B2D: @ 0x08210B2D
	.string "ミクリ『ようこそ {PLAYER}{KUN}\pルネシティで おこった だいじけんを\nきみが ひとりで かいけつ したのは\lなかなか みごと だったよ\p……おっと!\pきみひとりの ちからで\nかいけつ したわけでは なかったな\pきみと…… きみの ポケモンが\nちからを あわせたからこそ\lこんなんを のりこえ られたんだ\pわたしたち トレーナーは\nいろんな どうぐを あたえたり\lいろんな わざを おしえたり して\lポケモンを そだてている……\pけれど わたしたち じしんも\nポケモンから たくさんの ことを\lおしえられて いるのさ\pそして ここは……\nその せいかを ぶつけあう ばしょ\pさあ!\pホウエンで いちばん かれいに\nポケモンと おどれるのは だれなのか!\pいま ここで みせて もらおう!{EOS}"
	.if (. - gText_Rom_210B2D) > 0x155
	.error "gText_Rom_210B2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210B2D) < 0x155
	.space 0x155 - (. - gText_Rom_210B2D)
	.endif
