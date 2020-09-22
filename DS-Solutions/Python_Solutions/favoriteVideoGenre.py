userBooksListenedTo={
    "fred":["mass","world","stress"],
    "jenie":["happy","pride"],
    "rone":["alexender"]
}
bookGenres={
    "Horror":["mass","stress"],
    "Comedy":["happy"],
    "Romance":["alexender","pride","world"]
}
def favoriteVideoGenre(numUsers,userBooksListenedTo,numGenres,bookGenres):
    fav={}
    for key1 in userBooksListenedTo.keys():
        for i in range(len(userBooksListenedTo[key1])):
            for key2 in bookGenres.keys():
                for j in range(len(bookGenres[key2])):
                    if userBooksListenedTo[key1][i] ==bookGenres[key2][j]:
                        fav[key1]=key2



    print(fav)
favoriteVideoGenre(3,userBooksListenedTo,3,bookGenres)