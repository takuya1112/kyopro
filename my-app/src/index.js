import React from "react";
import ReactDOM from "react-dom/client";

import "./index.css";

const books = [
  {
    author: "草薙龍瞬",
    title: "Practice Without Reaction",
    img: "https://m.media-amazon.com/images/I/71TgEfEJHcL._AC_UL320_.jpg",
    id: 1,
  },

  {
    author: "山崎 圭一",
    title: "一度読んだら絶対に忘れない世界史の教科書",
    img: "https://m.media-amazon.com/images/I/71gg2BNWOdL._SL1419_.jpg",
    id: 2,
  },
];

function BookList() {
  return (
    <section className="booklist">
      {books.map((book) => {
        return <Book {...book} key={book.id} />;
      })}
    </section>
  );
}

const Book = (props) => {
  const { img, title, author } = props;
  const displayTitle = () => {
    console.log(title);
  };
  return (
    <article className="book">
      <img src={img} alt={title} />
      <h2>{title}</h2>
      <button onClick={displayTitle}>display title</button>
      <h4>{author}</h4>
    </article>
  );
};

const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<BookList />);
